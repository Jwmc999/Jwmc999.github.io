---
layout: post
Title: "Take Input"
comments: true
permalink: /cin/
---
#Probelm
Write a program that takes two numbers as input, assigns those values to the provided a and b variables, then outputs their sum.

Sample Input
24
48

Sample Output
72

```cpp
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    // your code goes here
    cin>>a;
    cin>>b;
    int sum = a + b;
    cout<< sum << endl;
    return 0;
}
```
