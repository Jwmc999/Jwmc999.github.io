---
layout: default
title: "Non-Linear Data Structure: Graph"
mathjax: true
---

# Graph
- A graph is a data type for storing adjacency relations.
  - Objects: a finite set of nodes (or vertices)
  - Relationships: a finite set of edges (or arcs, links)
#### Examples
- Computer networks, Road networks, Circuits, CS curriculum
## Undirected Graphs
- We define an _**undirected graph**_ as a collection of vertices
$$
V = \left \{ v_{1}, v_{2}, ..., v_{n} \right \}
$$
  - The number of vertices is denoted by $|V| = n$
  - Associated with this is a collection E of unordered pairs ${ v_{i}, v_{j}}$ termed edges which connect the vertices
- There are a number of data structures that can be used to implement graphs
  - Adjacency matrices
  - Adjacency lists
- We will assume in this course that a vertex is never adjacent to itself
  - For example, ${ v_{1}, v_{2}}$ will not define an edge
- The maximum number of edges in an undirected graph is
$$
\left | E \right |\leq \binom{\left | V \right |}{2}= \frac{\left | V \right |\left ( \left | V \right |-1 \right )}{2}=O\left ( \left | V \right |^{2} \right )
$$
#### Example 01
- Consider this collection of vertices
$$V = \left \{ v_{1}, v_{2}, ..., v_{9} \right \}$$
where $|V| = 9$

![edges](/_posts/Data-Structure/Lecture3/edge.png)
- Associated with these vertices are $|E| = 5$ edges
$$
E = \left \{ \left \{ v_{1}, v_{2} \right \}\left \{ v_{3}, v_{5} \right \} \left \{ v_{4}, v_{8} \right \}\left \{ v_{4}, v_{9} \right \}\left \{ v_{6}, v_{9} \right \}\right \}
$$
  - The pair ${ v_{j}, v_{k}}$ indicates that both vertex $v_{j}$ is adjacent to vertex $v_{k}$ and vertex $v_{k}$ is adjacent to vertex $v_{j}$
#### Example 02
- given the $|V|=n$ vertices
= {A, B, C, D, E, F, G}
and the $|E|=9$ edges

![exm2](/_posts/Data-Structure/Lecture3/exm.png)
### Degree
- The degree of a vertex is defined as the number of adjacent vertices
    |degree(A) = degree(D) = degree(C) = 3|
    |degree(B) = degree(E) = 4|
    |degree(F) = 1 degree(G) = 0|
 - Those vertices adjacent to a given vertex are its _neighbors_
### Sub-Graphs
- A _sub-graph_ of a graph: a subset of the vertices and a subset of the edges that connected the subset of vertices in the original graph

![subgraph](/_posts/Data-Structure/Lecture3/subgraph.png)
### Paths
- A path in an undirected graph is an ordered sequence of vertices
$$
\left \( v_{1}, v_{2}, ..., v_{k} \right \)
$$
  Where ${ v_{j-1}, v_{j}}$ is an edge for _j = l, ..., k_
  - Termed a path from $v_{0}$ to $v_{k}$
  - The length of this path is _k_
#### Example
![graphpath](/_posts/Data-Structure/Lecture3/graphpath.png)
- A path of length 4

![graphpath2](/_posts/Data-Structure/Lecture3/graphpath2.png)
- A path of length 5

![trivialpath](/_posts/Data-Structure/Lecture3/trivialpath.png)
- A _trivial_ path of length 0
### Simple Paths
- A _simple path_ has no repetitions other than perhaps the first and last vertices
(e.g.: A-B-C-A)
- A _simple cycle_ is a simple path of at least two vertices with the first and last vertices equal
- **What is the example of "simple cycle"?**
### Connectedness
![connected](/_posts/Data-Structure/Lecture3/connected.png)

- Two vertices $v_{i}$, $v_{j}$ are said to be _connected_ if there exists a path from $v_{i}$ to $v_{j}$
- A grapth is connected if there exists a path between any two vertices
### Weighted Graphs
![weight](/_posts/Data-Structure/Lecture3/weight.png)

- A weight may be associated with each edge in a graph
  - This could represent distance, energy consumption, cost, etc.
  - Such a graph is called a _weighted graph_
  - Pictorially, we will represent weights by numbers next to the edges
- The _length_ of a path within a weighted graph is the sum of all of the edges which make up the path
  - The length of the path (A, D, G) in the above graph is 5.1 + 3.7 = 8.8
- Different paths may have different weights
  - Another path is (A, C, F, G) with length 1.2 + 1.4 + 4.5 = 7.1
- Problem: find the shortest path between two vertices
  - Here, the shortest path from A to H is (A, C, F, D, E, G) with length 5.7
### Trees
- A graph is a tree if it is connected and there is a unique path between any two vertices
  - Three trees on the same eight vertices

![treegraph](/_posts/Data-Structure/Lecture3/treegraph.png)
- Consequences:
  - The number of edges is $|E|=|V|-1$ ($|V|$: number of nodes)
  - The graph is _acyclic_, that is, it does not contain any cycles
  - Adding one more edge must create a cycle
  - Removing any one edge creates two disjoint non-empty sub-graphs
### Forests
- A forest is any graph that has no cycles
- The collection of the tree. A forest removes the connectedness constraint from the tree.
- Consequences:
  - The number of edges is $|E|<|V|$
  - The number of trees is $|V| - |E|$
  - Removing any one edge adds one more tree to the forest
- Here is a forest with 22 vertices and 18 edges
  
  ![forest](/_posts/Data-Structure/Lecture3/forest.png)
  - There are four trees
---------------------------------------------------------------------------------------------------
## Directed Graphs
- In a _**directed graph**_, the edges on a graph are be associated with a direction
  - Edges are ordered pairs $(v_{j}, v_{k})$ denoting a connection from $v_{j}$ to $v_{k}$
  - The edge $(v_{j}, v_{k})$ is different from the edge $(v_{k}, v_{j})$
#### Example
![directed](/_posts/Data-Structure/Lecture3/directed.png)  

- Given our graph of nine vertices $$V = \left \{ v_{1}, v_{2}, ..., v_{9} \right \}$$
  - These six pairs $(v_{k}, v_{j})$ are _directed edges_
$$
E = \left \{ \left \{ v_{1}, v_{2} \right \}\left \{ v_{3}, v_{5} \right \} \left \{ v_{5}, v_{3} \right \}\left \{ v_{6}, v_{9} \right \}\left \{ v_{8}, v_{4} \right \}\left \{ v_{9}, v_{4} \right \}\right \}
$$
### In and Out Degrees
- The degree of a vertex must be modified to consider both cases:
  - The _out-degree_ of a vertex is the number of vertices which are adjacent to the given vertex
  - The _in-degree_ of a vertex is the number of vertices which this vertex is adjacent to 
- In this graph:(the graph needs to be updated)
  in_degree($$v_{1}$$) = 0 | out_degree($$v_{1}$$) = 2
  in_degree($$v_{5}$$) = 2 | out_degree($$v_{5}$$) = 3
### Sources and Sinks
- Sources and Sinks
  - Vertices with an in-degree of zero are described as _sources_
  - Vertices with an out-degree of zero are described as _sinks_
- In this graph:
  - Sources: $$v_{1}$$, $$v_{6}$$, $$v_{7}$$
  - Sinks: $$v_{2}$$, $$v_{9}$$ (this should be updated)
### Paths
- A path in a directed graph is an ordered sequence or vertices
   |   $$\left \( v_{1}, v_{2}, ..., v_{k} \right \)$$ |
  where $$\left \{ v_{j-1}, v_{j} \right \}$$ is an edge for _j = l, ..., k_
- A path of length 5 in this graph is 
| $$\left \( v_{1}, v_{4}, v_{5}, v_{3}, v_{5}, v_{2} \right \)$$|
- A simple cycle of length 3 is
|$$\left \( v_{8}, v_{4}, v_{5}, v_{8} \right \)$$|
### Connectedness
- Two vertices $$v_{j}$$, $$v_{k}$$ are said to be _connected_ if there exists a path from $$v_{j}$$ to $$v_{k}$$
  - A graph is _strongly connected_ if there exists a directed path between any two vertices
  - A graph is _weakly connected_ if there exists a path between any two vertices that ignores the direction
- In this graph:
  - The sub-graph $$\left \{ v_{3}, v_{4}, v_{5}, v_{8} \right \}$$ is strongly connected
  - The sub-graph  $$\left \{ v_{1}, v_{2}, v_{3}, v_{4}, v_{5}, v_{8} \right \}$$ is weakly connected
### Weighted Directed Graphs
![weightdirect](/_posts/Data-Structure/Lecture3/weigtheddirected.png)

- In a weighted directed graphs, each edges is associated with a value
- Unlike weighted undirected graphs, if both $$\left \( v_{j}, v_{k} \right \)$$ and $$\left \( v_{k}, v_{j} \right \)$$ are edges, it is not required that they have the same weight
### Directed Acyclic Graphs (DAG)
- A directed _acyclic graph_ is a directed graph which has no cycles
  - These are commonly referred to as DAGs
  - They are graphical representations of partial orders on a finite number of elements
- These two are DAGs:

  ![DAG](/_posts/Data-Structure/Lecture3/DAG.png)
---------------------------------------------------------------------------------------------------
# Representations
- How do we store the adjacency relations?
  - Binary-relation list
  - Adjacency matrix
  - Adjacency list
## Binary-Relation List
- The most inefficient is a relation list: 
  - A container storing the edges
  - Requires $$\Theta \left ( \left |E  \right | \right )$$ memory
  - Determining if $$v_{j}$$ is adjacent to $$v_{k}$$ is $$\Theta \left ( \left |E  \right | \right )$$
  - Finding all neighbors of $$v_{j}$$ is $$\Theta \left ( \left |E  \right | \right )$$
## Adjacency Matrix
- Requiring more memory but also faster, an adjacency matrix
  - The matrix entry (_j_, _k_) is set to **true** if there is an edge $$\left \( v_{j}, v_{k} \right \)$$ 
  - Requires $$\Theta \left ( \left |V  \right |^{2} \right )$$ memory
  - Determining if $$v_{j}$$ is adjacent to $$v_{k}$$ is $$\Theta \left ( 1  \right )$$
  - Finding all neighbors of $$v_{j}$$ is $$\Theta \left ( \left |V  \right | \right )$$
  - Most efficient for existence of an edge between $$v_{j}$$ and $$v_{k}$$
- Adjacency matrix of a weighted graph:
  - Put the weight value to the cell
  
  ![adjmatrix](/_posts/Data-Structure/Lecture3/adjmat.png)
## Adjacency List
- Most efficient for algorithms is an adjacency list
  - Each vertex is associated with a list of its neighbors
  - Requires $$\Theta \left ( \left |V  \right |+\left | E \right | \right )$$ memory
 
   ![adjlist](/_posts/Data-Structure/Lecture3/adjlist.png)
