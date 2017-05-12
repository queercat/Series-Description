#include <iostream>
#include <limits.h>

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

// debugArray ... Debugs and prints the array.
void debugArray(int **arr, int size) {
    //int rows = sizeof(arr) / sizeof(arr[0]); //Get the ammount of rows.
    //int cols = sizeof(arr[0]) / sizeof(int); //Get the amount of collumns.

    //Doing this the boring inneficient way.
    int rows = size;
    int cols = size;

    for (int col = 0; col < cols; col++){
        for (int row = 0; row < rows; row++) {
            std::cout << arr[row][col] << " ";
        }

        std::cout << std::endl;
    }

    //Spacing
    std::cout << std::endl << std::endl << std::endl;
}

// zeroArr ... Zero an array.
void zeroArr(int **arr, int size) {
    //Doing this the boring way.
    int rows = size;
    int cols = size;

    //Set all values to zero.
    for (int row = 0; row < rows; row++) {
        //Set the arr[x] to the correct size.
        arr[row] = new int[size];
        for (int col = 0; col < cols; col++) {
            //Set values to zero.
            arr[row][col] = 0;
        }
    }
}

// returnSmallest ... Return the smallest value as the index from an arr.
int returnSmallest(int *distance, int size) {
	//Declaring the smallest value.
	int smallest = 0;

	//Creating for loop.
	for (int row = 0; row < size; row++) {
		if (smallest >= distance[row]) {
			smallest = distance[row];
		}
	}

	return smallest;
}

// findShortest ... Finds the shortest distance to a specific vetex.
int findShortest(int *arr, size) {
	//Smallest index.
	int smallest = 0;
	
	for (row = 0; row < size; row++) {
		if (arr[row] != 0) {
			
		}	
	}
}

// getShortestPath ... Return the shortest path given an adjacency matrix.
int getShortestPath(int **arr, int size) {
	//Shortest Path.
	int shortestPath;

	//Creating secondary vertex matrix.
	int **vertexMatrix = arr;
	
	//Create a distance array.
	int *distanceArr;
	//Initialize size.
	distanceArr = new int [size];

	//Create a if this thing has been visited array.
	bool *hasVisited;
	//Initalize size.
	hasVisited = new bool [size];

	//Set the value to the source to equal 0.
	distanceArr[0] = 0;

	//Set all other values to infinity.
	for (int node = 1; node < size; node++) {
		//Set distance of not source to max value.
		distanceArr[node] = INT_MAX;
		//Set the if it has been visited to false starting out. 
		hasVisited[node] = false;
	}

	for (int i = 0; i < size - 1; i++) {
		 shortestPath = findShortest(arr[i]);
	}

	return shortestPath;
}

// getLongestPath ... Return the longest path given an adjacency matrix.
int getLongestPath(int **arr, int size) {
	//Longest path.
	int pathLength;

	return pathLength;
}

// getSumPaths ... Return all of the paths possible given an adjacency matrix.
int getSumPaths(int **arr, int size) {
	//Overall paths.
	int paths;

	return paths;
}

// getInput ... Gets the line from the file and evaluate that.
void getInput() {	
	//Setting how many graphs there are.
    std::cin >> graphs;
   
    for (int graphDescription = 0; graphDescription < graphs; graphDescription++){	
        //Number of nodes.
        int N;
        std::cin >> N;

        //Number of edges.
        int M;
        std::cin >> M;

        //Creating array for vertice edge pairs.
        int **IJ;

        //Not fully sure why the syntax is this, but it sets the arrays size.
        IJ = new int *[N];

        //Set the array to 0s!
        //memset(IJ, 0, sizeof(IJ));
        zeroArr(IJ, N);

        //Setting the tokens for getting the set IJ values.
        int I;
        int J;

        //Itterate over the following pairs and assign them.
        for (int edge = 0; edge < M; edge++) {
            std::cin >> I >> J;
            IJ[I - 1][J - 1] = 1;    
        }

	std::cout << "Graph Number: " << graphDescription + 1 << std::endl;
	std::cout << "Shortest Path: " << getShortestPath(IJ, N) << std::endl;
	std::cout << "Longest Path: " << getLongestPath(IJ, N) << std::endl;
	std::cout << "Number of paths: " << getSumPaths(IJ, N) << std::endl << std::endl;


    }
}

// main .. The main functions.
int main() {
	//Get the input from the file and evaluate.
	getInput();
	return 0;
}
