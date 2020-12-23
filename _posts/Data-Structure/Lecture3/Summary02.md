---
layout: post
title: "Non-Linear Data Structure: Graph"
use_math: true
comments: true
---
# Graph
- A graph is a data type for storing adjacency relations.
  - Objects: a finite set of nodes (or vertices)
  - Relationships: a finite set of edges (or arcs, links)
### Examples
- Computer networks, Road networks, Circuits, CS curriculum
## Undirected Graphs
- We define an _**undirected graph**_ as a collection of vertices
$$V = {$$v_{1}$$, $$v_{2}$$, ... , $$v_{n}$$}$$
  - The number of vertices is denoted by $$|V| = _n_$$
  - Associated with this is a collection E of unordered pairs {$$v_{i}$$, $$v_{j}$$} termed edges which connect the vertices
- There are a number of data structures that can be used to implement graphs
  - Adjacency matrices
  - Adjacency lists
- We will assume in this course that a vertex is never adjacent to itself
  - For example, $$\left \{ v_{1}, v_{2} \right \}$$ will not define an edge
### Example
- Consider this collection of vertices
$$V = {$$v_{1}$$, $$v_{2}$$, ... , $$v_{9}$$}$$
where $$|V| = 9$$
![edges](/edge.png)
- Associated with these vertices are $$|E| = 5$$ edges
$$E = {{$$v_{1}$$, $$v_{2}$$}, {$$v_{3}$$, $$v_{5}$$}, {$$v_{4}$$, $$v_{8}$$}, {$$v_{4}$$, $$v_{9}$$}, {$$v_{6}$$, $$v_{9}$$}}$$
  - The pair {$$v_{j}$$, $$v_{k}$$} indicates that both vertex $$v_{j}$$ is adjacent to vertex $$v_{k}$$ and vertex $$v_{k}$$ is adjacent to vertex $$v_{j}$$


