---
layout: post
title: Lecture2_Summary02
---
# Stack
## A collection of elements that are inserted and removed according to the 'last-in first-out (LIFO)' orders
- The lastly inserted element will be removed firstly.
- Insertion and removal are only available at the **top** of stack.
# Stack: Terminologies
## Top: the top of a stack
## Push: Insert an item on the top of stack
## Pop: Remove the item on the top of stack
# Parenthesis Matching
## Problem
- Check if each opening parenthesis has a corresponding closing one. 
## Example:
- Balanced: (()()()), (((()))), (()((())()))
- Unbalanced: (((((()), ())), (()()(()
# Parenthesis Matching with Stack
## Push all the open symbols to a stack.
## Each finding of a close symbol, pop an open symbol from the stack and match them.
- If the stack is empty, the statement is not balanced.
## Once processing all the parenthesis, check the status of the stack: 
- If the stack is empty: it is balanced
- Otherwise, not balanced.
## Example: ((()()))

# Queue
## A collection of elements that are inserted and removed according to the 'first-in first-out (FIFO)' orders.
- The firstly inserted element will be firstly removed.
- All insertions are made at the position called rear (back, tail).
- All deletions are made at the position called front (head).
# Queue: Terminologies
## Front (head): the front of queue where deletions occur. 
## Rear (back, tail): the rear of queue where insertions occur. 
## Enqueue: insert an item at the rear.
## Dequeue: delete the item at the front.
# Linear Queue
Problem: We cannot add anymore although we have empty spaces.
# Circular Queue
## A queue with cyclic rear and front indices to fully utilize the space.
# STL (Standard Template Library)
## A software library for the C++ programming language.
## STL provides a set of common container classes:
- pair, array, vector, list, ...
- queue, stack, priority queue, ...
- set, map, ...
## STL provides a large number of algorithms:
- sort, binary search, ...
# Palindrome Check
## A palindrome is a sequence of characters which reads the same backward as forward. (e.g.: radar, rotator, level)
```c
#include <cstring>
#include <stack>
#include <queue>

bool Check_Palindrome(const char *_str)
{
  std::stack<char> s;
  std::queue<char> q;
  
  int len = strlen(_str);
  for(int i=0;i<len;i++);
  {
    s.push(_str[i]);
    q.push(_str[i]);
  }

while(!s.empty())
  {
    if(s.top()!=q.front())
      return false;
    s.pop();
    q.pop();
  }
  return true;
}
```
