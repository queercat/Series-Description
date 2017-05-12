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
int graphs;

// getInput ... Gets the line from the file and evaluate that.
void getInput() {	
	//Setting how many graphs there are.
    std::cin >> graphs;
   
    std::cout << graphs << std::endl; 

    for (int graphDescription = 0; graphDescription < graphs; graphDescription++){	
        //Number of nodes.
        int N;
        std::cin >> N;

        //Number of edges.
        int M;
        std::cin >> M;

        //Creating array for vertice edge pairs.
        int *IJ;
        
        //Setting the tokens for getting the set IJ values.
        int I;
        int J;

        //Itterate over the following pairs and assign them.
        for (int i = 0; i < M; i++) {
            std::cin >> I >> J;
            std::cout << "I: " << I; 
            std::cout << " J: " << J << std::endl;
        }

        //Debug info
        std::cout << "Number of vertices: " << N << std::endl;
        std::cout << "Number of edges: " << M << std::endl;
	}
}

// main .. The main functions.
int main() {
	//Get the input from the file and evaluate.
	getInput();
	return 0;
}
