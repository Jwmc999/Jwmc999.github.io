---
layout: default
author: Jwmc999
title: "Algorithm Analysis"
comments: true
---
## Motivation
- The goal of algorithm analysis is to take a block of code and determine the asymptotic run time or asymptotic memory requirements based on various parameters.
  - Given an array of size n:
    - Merge sort requires $\Theta(n lg n)$ time and $\Theta(n)$ additional memory
- The asymptotic behavior of algorithms indicates the ability to scale
- Suppose that we have two algorithms A and B whose runtimes are $f_{A}(n)=\Theta(n^2)$ and $f_{B}(n)=\Theta(n lg n)$
  - For $n=2k$
    - $f_{A}(n)=(2k)^2=4k^2$
    - $f_{B}(n)=2k lg 2k=2k (lg k+lg 2) = 2k(lg k+1)=2k lg k + 2k$
  - For $n=10k$
