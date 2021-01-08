---
layout: post
title: "Multi-Dimension Array"
---
# Matrix Array
You are a movie theater manager.
You are given a two-dimensional array with 6 rows and 6 columns - 36 elements with 0 value, that represent empty theater seats.
All 36 tickets for session were sold, so you need to identify all of the seats with value 1.
Write a program that replaces all 0 values in the given array by 1 and outputs the resulting matrix.

```cpp
#include <iostream>
using namespace std;

int main() {

    int rows = 6;
    int cols = 6;

    float matrix[rows][cols] = {
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
    };

    // your code goes here
    for(int rows=0; rows<6; rows++){
    	for(int cols=0; cols<6;cols++){
    		matrix[rows][cols]=1;
    		cout<<matrix[rows][cols];
    	}

    }

	return 0;
}
```
