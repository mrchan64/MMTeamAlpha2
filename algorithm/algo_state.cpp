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
#include "algo_state.hpp"
#include <iostream>
#include <queue>
using namespace std;

const int MAZE_SIZE = 34;
const int WALL = 0;
const int PATH = 1;
const int GOAL = 2;
const int START = 3;
int maze[MAZE_SIZE][MAZE_SIZE];

void initMaze() {
	for (auto i=0; i<MAZE_SIZE; i++) {
		for (auto j=0; j<MAZE_SIZE; j++) {
			if (i%2==1 && j%2==1) {
				maze[i][j] = 1;
			} else {
				maze[i][j] = 0;
			}
		}
	}

	//init GOAL
	maze[15][15] = GOAL;
	maze[15][17] = GOAL;
	maze[17][15] = GOAL;
	maze[17][17] = GOAL;

	//init START
	maze[1][33] = START;
}

void addWall(int r, int c) {
	maze[r][c] = WALL;
}

void addPath(int r, int c) {
	maze[r][c] = PATH;
}



int main() {
	init_maze();
	for (auto i=0; i<MAZE_SIZE; i++) {
		for (auto j=0; j<MAZE_SIZE; j++) {
			cout << maze[i][j];
		}
		cout << endl;
	}
	return 0;
}