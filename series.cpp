#include <iostream>
#include <string>
#include <list>
#include <stdlib.h>
#include <stdio.h>

/*
 *	Series.cpp -- Describe a series of acyclical graphs. Input will be given as...
 *	
 *	Line 0: Number of graph descriptions. C.
 *	
 *	Line 1: Number of nodes in the graph. N.
 *	Line 2: Number of node pairs. M.
 *	
 *	Line 3 ... M: Node connections. IJ.
 *
 * 	Output will be given as...
 *
 * 	i. The length of the shortest path from node 1 ... node N.
 * 	ii. The length of the longest path from node 1 ... node N.
 * 	iii. The numbers of paths total from node 1 ... node N.
 *
 * 	Requirements:
 * 		
 * 		-Do not parse the textfiles name.
 * 		-The graph bust me stored by either an adjacency list or adjacency matrix.
 * 		-Linear time O(n+m) [adjacency list], Exponential time O(n^2) [adjacency matrix].
 */

/* Global Variables */
//Amount of graph descriptions there are.
unsigned int graphs;

// debug ... Debug information.
void debug() {
	std::cout << "Number of graphs: " << graphs << std::endl;
}

// readLines ... Read the lines from the input and evaluate.
void readLines() {

}

// getInput ... Gets the line from the file and evaluate that.
void getInput() {	
	//The line we will be reading into.
	std::string line;

	//Unsigned int that acts as the line count.
	unsigned int lineCount = 0;

	//Set graphs count before loop.
	getline(std::cin, line);
	graphs = atoi(line.c_str());

	for (graphDescriptions = 0; graphDescriptions < graphs; graphDescription++){	
		readLines();
	{
}

// main .. The main functions.
int main() {
	//Get the input from the file and evaluate.
	getInput();

	//Debug information pertaining to the program.
	debug();
	
	return 0;
}
