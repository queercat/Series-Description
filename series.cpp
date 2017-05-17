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

    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++) {
            std::cout << arr[row][col] << " ";
        }

        std::cout << std::endl;
    }

    //Spacing
    std::cout << std::endl;
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

// getMin ... Find vertex with minimum distance value.
int getMin(int *dist, bool *visited, int size) {
	//Set min value as infinity.
	int min = INT_MAX, min_index;

	for (int v = 0; v < size; v++) {
		if (!visited[v] && dist[v] <= min) {
			min = dist[v], min_index = v;
		}
	}

	//Return vertice with smallest distance.
	return min_index;
}

int printDistances(int *dist, int v) {
	for (int i = 0; i < v; i++) {
		std::cout << "Vertex: " << i << " -- Distance from source: " << dist[i] << std::endl;
	}

	std::cout << std::endl;
}

// getShortestPath ... Return the shortest path given an adjacency matrix.
int getShortestPath(int **arr, int size) {
	//Setup a reference variable for the shortest path.
	int shortestPath = 0;

	//Dijkstra's Algorithm
	//1. Assign to every node a distance value, [source] = 0, [all else] = infinity.
	//2. Set the initial node as current and mark all other nodes as unvisited.
	//3. For the current node look at all neighbors and consider distances. (1 in an unweighted)
	//4. Once done considering mark current node as visited and remove from unvisited set.
	//5. If the destination node has been marked visited when planning a route or the smallest value of the set is infinity stop. The algorithm is done.
	//6. Else go back up to the next node that is marked with shortest distance and go back to step 3.
	
	//Creating the visited array.
	bool *visited = new bool [size];
	
	//Creating the distance array.
	int *distance = new int [size];

	//Setting all values to false.
	for (int cell = 0; cell < size; cell++) {
		visited[cell] = false;
		distance[cell] = INT_MAX;
	}

	//Source distance is always 0.
	distance[0] = 0;

	//Looping through all vertices except last.
	for (int v = 0; v < size - 1; v++) {
		int minVertex = getMin(distance, visited, size);

		visited[v] = true;

		//Updating distance matrix.
		for (int adv = 0; adv < v; adv++) {
			if (!visited[adv] && distance[minVertex] != INT_MAX) {
				distance[adv] = distance[minVertex];	
			} 
		}
		
	}

	printDistances(distance, size);
	
	//Return the shortest path.
	return distance[size-1];
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
