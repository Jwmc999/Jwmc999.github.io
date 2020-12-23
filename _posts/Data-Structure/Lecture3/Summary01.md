---
layout: post
title: "Non-Linear Data Structure 01"
---
# Tree
## A collection of nodes to represent a hierarchical relationship
- Information is stored in nodes
- There is a first node, or root
- Each node has variable number of successors (children)
- Each node (other than the root) has exactly one node (parent) pointing to it.
## Trees: Example
- Directory structures
# Trees
![trees](tree.png)
## All nodes will have zero or more child nodes or children
- I has three children: J, K, and L
## All nodes other than the root node, there is one parent node.
- H is the parent of I
## The degree of a node is defined as the number of its children:
- deg(I) = 3
## Nodes with the same parent are _siblings_
- J, K, and L are siblings
# Leaf and Internal Nodes
## Nodes with degree zero (zero children) are also called leaf nodes.
## All other nodes are said to be internal nodes.
# Unordered & Ordered
## These trees are equal if the order of the children is ignored: unordered tree
## They are different if order is relevant: ordered trees
# Paths
## A path is a sequence of nodes (a_0_, a_2_, ... , a_n_), where a_k+1_ is a child of a_k_.
- The length of this path is _n_
- The path (B,E,G) has length 2
