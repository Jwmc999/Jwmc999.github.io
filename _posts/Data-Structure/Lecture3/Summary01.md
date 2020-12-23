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
![trees](/tree.png)
## All nodes will have zero or more child nodes or children
- I has three children: J, K, and L
## All nodes other than the root node, there is one parent node.
- H is the parent of I
## The degree of a node is defined as the number of its children:
- deg(I) = 3
## Nodes with the same parent are _siblings_
- J, K, and L are siblings
## Leaf and Internal Nodes
- Nodes with degree zero (zero children) are also called leaf nodes.
- All other nodes are said to be internal nodes.
## Unordered & Ordered
- These trees are equal if the order of the children is ignored: unordered tree
- They are different if order is relevant: ordered trees
## Paths
![paths](/path.png)
- A path is a sequence of nodes ($a_{0}$, a_{2}, ... , a_{n}), where a_{k+1} is a child of a_{k}.
  - The length of this path is _n_
  - The path (B, E, G) has length 2
## Depth
![depth](/depth.png)
- For each node in a tree, there exists a unique path from the root node to that node.
- The length of this path is depth of the node. 
  - E has depth 2
  - L has depth 3
## Height
![height](/height.png)
- The height of a tree is defined as the maximum depth of any node within the tree
  - The height of a tree within one node is 0
    - Just the root node
  - For convenience, we define the height of the empty tree to be -1
## Ancestor and Descendant
- If a path exists from node _a_ to node _b_
  - _a_ is an ancestor of _b_
  - _b_ is a descendent of _a_
- Thus, a node is both an ancestor and a descendent of itself
  - We can add the adjective strict to exclude equality: _a_ is a strict descendent of _b_ if _a_ is a descendent of _b_ but _a_ \ne _b_
