---
layout: post
title: "If Else"
comments: true
permalink: /else/
---
# Else
Write a program to check if the number is even or odd. Take an integer input from the user, if it is even print "even", otherwise print "odd".

Sample Input
25

Sample Output
odd

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    cin>>number;
    // your code goes here

    if(number % 2 == 0){
    	cout<<"even"<<endl;
    }

    else{
    		cout<<"odd"<<endl;
    	}
    return 0;
}
```
