/***********************************************************************
 *                                                                     *
 *   This FILE sets up the algorithm states in the Micromouse          *
 *                                                                     *
 *   Author: EDWARD CHEN                                               *
 *   Date: 4/4/2019                                                    *
 *   CPP FILE                                                          *
 *                                                                     *
 ***********************************************************************/

//#include "mbed.h"
#include "AlgoState.hpp"

const int MAZE_SIZE = 16;
const int PATH = 0;
const int WALL = 1;
const int GOAL = 2;
const int START = 3;

const int UP = 11;
const int DOWN = 12;
const int LEFT = 13;
const int RIGHT = 14;

static int ns_walls[MAZE_SIZE-1][MAZE_SIZE];
static int ew_walls[MAZE_SIZE][MAZE_SIZE-1];
static int dist[MAZE_SIZE][MAZE_SIZE];
static int visited[MAZE_SIZE][MAZE_SIZE];


void AlgoState::initMaze() {
	//init ff
	int start_val = 14;
	for (auto i = 0; i < MAZE_SIZE / 2; i++) {
		for (auto j = 0; j < MAZE_SIZE / 2; j++) {
			dist[i][j] = start_val - i - j;
		}
	}
	for (auto i = 8; i < MAZE_SIZE; i++) {
		for (auto j = 0; j < MAZE_SIZE; j++) {
			dist[i][j] = dist[MAZE_SIZE - i - 1][j];
		}
	}
	for (auto i = 0; i < MAZE_SIZE; i++) {
		for (auto j = 8; j < MAZE_SIZE; j++) {
			dist[i][j] = dist[i][MAZE_SIZE - j - 1];
		}
	}
	for (auto i = 8; i < MAZE_SIZE; i++) {
		for (auto j = 8; j < MAZE_SIZE / 2; j++) {
			dist[i][j] = dist[MAZE_SIZE - i - 1][j];
		}
	}
}

void AlgoState::addWall(int r, int c, int dir) {
	if (dir == UP) ns_walls[r - 1][c] = WALL;
	else if (dir == DOWN) ns_walls[r + 1][c] = WALL;
	else if (dir == LEFT) ew_walls[r][c - 1] = WALL;
	else if (dir == RIGHT) ew_walls[r][c + 1] = WALL;
}

void AlgoState::floodFill() {
	/*let stack = stack of points to be processed // can also use queue, same results
		push current mouse position on stack
	while stack not empty:
		let cur = pop top element of stack
		mark cur as processed
		if dist(cur) == 0 skip to next // don't want to update end goal with a non-zero distance!
		let shortest = +infinity // signify "not set"/invalid path
		for all directions(N, S, E, W)
			let neighbor = cur + direction
			if no wall between cur and neighbor
				if dist(neighbor) < shortest then set shortest = dist(neighbor)
				if neighbor not processed before then push neighbor on stack
		if shortest == +infinity then skip to next // cell has no openings, continue
		if cur dist == shortest + 1 then skip to next // nothing was updated
		set dist(cur) = shortest + 1
		push all OPEN neighbors of cur on the stack, even if previously processed // can cause problems if you don’t*/
	
	stack<pair<int, int>> st;
	pair<int, int> startLoc(15, 0);
	st.push(startLoc);
	int count = 0;
	while (!st.empty()) {
		count++;
		AlgoState::printVisited();
		pair<int, int> cur = st.top();
		st.pop();

		//mark cur as processed
		visited[cur.first][cur.second] = 1;

		//if dist(cur) == 0 skip to next // don't want to update end goal with a non-zero distance!
		if (!dist[cur.first][cur.second]) continue;  

		//let shortest = +infinity // signify "not set"/invalid path
		int shortest = 100;


		pair<int, int> nextBest;
	
		//check all neighbors and add neighbor if not visited 
		//check north 
		if (checkInMap(cur.first - 1, cur.second)) {
			cout << "up" << endl;
			int nr = cur.first - 1;
			int nc = cur.second;
			if (!ns_walls[nr][nc]) {
				if (dist[nr][nc] < shortest) {
					shortest = dist[nr][nc];
					nextBest = { nr, nc };
				}
				if (!visited[nr][nc])
					st.push(pair<int, int> (nr, nc));
			}
		}
		//check south
		if (checkInMap(cur.first + 1, cur.second)) {
			cout << "down" << endl;
			int nr = cur.first + 1;
			int nc = cur.second;
			if (!ns_walls[cur.first][cur.second]) {
				if (dist[nr][nc] < shortest) {
					shortest = dist[nr][nc];
					nextBest = { nr, nc };
				}
				if (!visited[nr][nc])
					st.push(pair<int, int> (nr, nc));
			}
		}
		//check east
		if (checkInMap(cur.first, cur.second-1)) {
			cout << "left" << endl;
			int nr = cur.first;
			int nc = cur.second - 1;
			if (!ew_walls[nr][nc]) {
				if (dist[nr][nc] < shortest) {
					shortest = dist[nr][nc];
					nextBest = { nr, nc };
				}
				if (!visited[nr][nc])
					st.push(pair<int, int> (nr, nc));
			}
		}
		//check west
		if (checkInMap(cur.first, cur.second + 1)) {
			cout << "right" << endl;
			int nr = cur.first;
			int nc = cur.second + 1;
			if (!ew_walls[nr][nc]) {
				if (dist[nr][nc] < shortest) {
					shortest = dist[nr][nc];
					nextBest = { nr, nc };
				}
				if (!visited[nr][nc])
					st.push(pair<int, int> (nr, nc));
			}
		}
		//check all neighbors and add neighbor if not visited 

		cout << shortest << endl;
		cout << nextBest.first << " " << nextBest.second << endl;
		st.push(nextBest);

		if (shortest == 100) continue;
		else if (dist[cur.first][cur.second] == shortest + 1) continue;

		dist[cur.first][cur.second] = shortest + 1;

		/*if (checkInMap(cur.first-1, cur.second)) {
			st.push(pair<int, int> (cur.first-1, cur.second));
		}
		if (checkInMap(cur.first, cur.second-1)) {
			st.push(pair<int, int> (cur.first, cur.second-1));
		}
		if (checkInMap(cur.first+1, cur.second)) {
			st.push(pair<int, int> (cur.first+1, cur.second));
		}
		if (checkInMap(cur.first, cur.second+1)) {
			st.push(pair<int, int> (cur.first, cur.second+1));
		}*/
	}
	AlgoState::printVisited();
	AlgoState::printDist();
}

bool AlgoState::checkInMap(int r, int c) {
	if (r >= 0 && r < MAZE_SIZE &&
		c >= 0 && c < MAZE_SIZE) {
		return true;
	} 
	return false;
}

void AlgoState::printVisited() {
	for (auto i = 0; i < MAZE_SIZE; i++) {
		for (auto j = 0; j < MAZE_SIZE; j++) {
			cout << visited[i][j] << " ";
		}
		cout << endl;
	}
}

void AlgoState::printDist() {
	for (auto i = 0; i < MAZE_SIZE; i++) {
		for (auto j = 0; j < MAZE_SIZE; j++) {
			if (dist[i][j] >= 10) {
				cout << dist[i][j] << " ";
			}
			else {
				cout << dist[i][j] << "  ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	AlgoState::initMaze();
	AlgoState::floodFill();
	return 0;
}