#include <iostream>
#include <string>
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

class Graph {
	private:
		//Vertices or node points.
		unsigned int N;

		//Edges or lines.
		unsigned int M;

		//Pairs of linked vertices.
		unsigned int* I;

	public:
		// getNumberOfPaths ... Return the amount of paths there are from 1 ... N.
		unsigned int getNumberOfPaths() {
			unsigned int paths;

			return paths;
		}

		// getLongestPath ... Return the longest path of the graph.
		unsigned int getLongestPath() {
			unsigned int distance;

			return distance;
		}

		// getShortestPath ... Return the shortest path of the graph.
		unsigned int getShortestPath() {
			unsigned int distance;

			return distance;
		}

		// connectNodes ... Create a line between two nodes. 
		void connectNodes(unsigned int i, unsigned int j) {

		}

		// setNodeCount ... Set number of nodes.
		void setNodeCount(unsigned int N) {
			this->N = N; 
		}

		// setLineCount ... Set number of connected nodes.
		void setLineCount(unsigned int M) {
			this->M = M;
		}

		// getNodeCount ... Return the number of nodes.
		unsigned int getNodeCount() {
			return this->N;
		}	

		// getLineCount ... Return the number of lines.
		unsigned int  getLineCount() {
			return this->M;
		}
};


// debug ... Debug information.
void debug() {
	std::cout << "Number of graphs: " << graphs << std::endl;
}

void debugGraph(Graph graph) {
	std::cout << "Number of nodes: " << graph.getNodeCount() << std::endl;
	std::cout << "Number of lines: " << graph.getLineCount() << std::endl;
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
	
	//Creating the graph reference.
	Graph graph;

	//Get all the lines of the file.
	while (getline(std::cin, line)) {
		//Depending on the values write to different places.
		switch(lineCount) {
			case 0:
				graph.setNodeCount(atoi(line.c_str()));
			case 1:
				graph.setLineCount(atoi(line.c_str()));
		}

		//Itterate the line count!
		lineCount++;
	}

	//Get debug information about the graph.
	debugGraph(graph);

}

// main .. The main functions.
int main() {
	//Get  the input from the file and evaluate.
	getInput();

	//Debug information pertaining to the program.
	debug();
	
	return 0;
}
