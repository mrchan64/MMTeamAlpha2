/***********************************************************************
 *                                                                     *
 *   This FILE sets up the algorithm states in the Micromouse          *
 *                                                                     *
 *   Author: EDWARD CHEN                                               *
 *   Date: 3/3/2019                                                    *
 *   CPP FILE                                                          *
 *                                                                     *
 ***********************************************************************/

#ifndef ALGO_STATE_H
#define ALGO_STATE_H

#include <vector>
#include <iostream>
#include <stack>
#include <utility>

using namespace std;

class AlgoState {
public: 
	//create map
	static void initMaze();

	//functions
	static void addWall(int r, int c, int dir);
	static bool checkInMap(int r, int c);
	static void printDist();
	static void printVisited();

	//floodfill
	static void floodFill();
};

#endif