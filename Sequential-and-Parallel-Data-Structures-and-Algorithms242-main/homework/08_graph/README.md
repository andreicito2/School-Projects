# CPTR 242: Homework Assignment -- Graphs

## Problem Overview

Your task in this assignment is to implement two new functions for a graph.
The __deleteEdge__ function deletes the edge specified by the two vertex parameters.
The __deleteVertex__ function deletes the vertex specified by the input parameter, deletes all edges associated with the deleted vertex, and adds the deleted vertex to the queue of unused vertices.
The function should be implemented using only the standard functions on a graph.

NOTE: Because __deleteVertex__ also deletes any edges associated with the vertex, it may be easier to implement __deleteEdge__ first and use that within the __deleteVertex__ function.

NOTE #2: To add a deleted vertex to the queue of unused vertices, use ```addUnusedVertex(index);``` where ```index``` is the integer index of the deleted vertex (`unusedVertices` is a member variable to `GraphType`).

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Implement __deleteEdge__ for the graph implementation in `delete.cpp`.
    A file has been provided for you with a function header.
2. Implement __deleteVertex__ for the graph implementation in `delete.cpp`.
    A file has been provided for you with a function header.
3. Pass all the tests in Submitty.

## Compiling List Implementations

The graph implementation is called __GraphType__.
The code is compiled using `Make`.

```sh
make
```

The compiled files can be removed by using the clean argument

```sh
make clean
```


## Test Driver

The Submitty tests use a test driver similar to the other homework.

In this assignment, you may find it helpful to create your test input for the driver to validate your functions.
A `test_driver.cpp` has been provided to allow a user to run test input.
Please model the method we have used for homework 1 in creating your test input for the driver.

These are the complete menu options available:

```txt
Select options:
 - Menu                                             Display menu.
 - AddVertex <value>                                Add vertice to the graph
 - AddEdge <fromVertice> <toVertice> <edgeWeight>   Adds an edge from one vertice to the next, with a specified weight
 - WeightIs <fromVertice> <toVertice>               Returns the weight of a specified edge
 - DeleteEdge <fromVertice> <toVertice>             Deletes the edge between two vertices
 - DeleteVertex <vertice>                           Deletes the specified vertice
 ```

The code can be compiled by running the `make` command.

Example Input:
```sh
Menu
AddVertex 1
AddVertex 2
AddVertex 3
AddVertex 4
AddVertex 5
AddVertex 9
AddVertex 6
AddEdge 2 1 1
AddEdge 2 2 1
AddEdge 1 2 1
AddEdge 2 3 1
AddEdge 2 4 1
AddEdge 2 9 1
AddEdge 6 9 1
AddEdge 5 6 1
Print
WeightIs 2 1
DeleteEdge 2 3
Print
DeleteVertex 4
Print
Quit
```
To test the code, run this command:

```sh
./delete_graph.out
```

Resulting Standard Output:

```sh
Example Test
Select options:
 - Menu                                             Display menu.
 - AddVertex <value>                                Add vertice to the graph
 - AddEdge <fromVertice> <toVertice> <edgeWeight>   Adds an edge from one vertice to the next, with a specified weight
 - WeightIs <fromVertice> <toVertice>               Returns the weight of a specified edge
 - DeleteEdge <fromVertice> <toVertice>             Deletes the edge between two vertices
 - DeleteVertex <vertice>                           Deletes the specified vertice
Vertex 1 was added.
Vertex 2 was added.
Vertex 3 was added.
Vertex 4 was added.
Vertex 5 was added.
Vertex 9 was added.
Vertex 6 was added.
Edge (2, 1) with weight 1 has been created.
Edge (2, 2) with weight 1 has been created.
Edge (1, 2) with weight 1 has been created.
Edge (2, 3) with weight 1 has been created.
Edge (2, 4) with weight 1 has been created.
Edge (2, 9) with weight 1 has been created.
Edge (6, 9) with weight 1 has been created.
Edge (5, 6) with weight 1 has been created.
  1 2 3 4 5 9 6 
1 0 1 0 0 0 0 0 
2 1 1 1 1 0 1 0 
3 0 0 0 0 0 0 0 
4 0 0 0 0 0 0 0 
5 0 0 0 0 0 0 1 
9 0 0 0 0 0 0 0 
6 0 0 0 0 0 1 0 
Edge (2, 1) has weight 1.
Edge (2, 3) was deleted.
  1 2 3 4 5 9 6 
1 0 1 0 0 0 0 0 
2 1 1 0 1 0 1 0 
3 0 0 0 0 0 0 0 
4 0 0 0 0 0 0 0 
5 0 0 0 0 0 0 1 
9 0 0 0 0 0 0 0 
6 0 0 0 0 0 1 0 
Vertex 4 was deleted.
  1 2 3 5 9 6 
1 0 1 0 0 0 0 
2 1 1 0 0 1 0 
3 0 0 0 0 0 0 
5 0 0 0 0 0 1 
9 0 0 0 0 0 0 
6 0 0 0 0 1 0 
```


## Tips

* You can create a text file with all the user input.
  Then, when you run the program you may pass it in this file as input.

  ```sh
  ./a.out < sample.txt
  ```
  
  This is a good way to recreate your test each time you run your program.

## Submission

Your submission must include a `delete.cpp`
All other _.h_ and _.cpp_ files should remain unchanged.
