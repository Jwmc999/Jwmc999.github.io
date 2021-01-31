---
layout: post
title: "Empty seats"
comments: true
permalink: /calculation/
---
# Number of Empty Seats
You are making a program for a bus service.
A bus can transport 50 passengers at once.
Given the number of passengers waiting in the bus station as input, you need to calculate and output how many empty seats the last bus will have.

Sample Input:
126

Sample Output:
24

```cpp
#include <iostream>
using namespace std;

int main() {
    //your code goes here
    int a;
    cin>> a;
    int b;
    b = a % 50;
    int c = 50 - b;
    cout<< c <<endl;
    return 0;
}
```
