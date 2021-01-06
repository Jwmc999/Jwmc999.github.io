---
layout: default
title: "Countdown"
---
# While Loop: Decrement
Create a timer program that will take the number of seconds as input, output the remaining time and countdown to 0.
You need to output every number, including 0.

Sample Input
5

Sample Input
5
4
3
2
1
0

'''cpp
#include <iostream>
using namespace std;

int main()
{
    int seconds;
    cin>>seconds;
    
    //your code goes here
    while(seconds >= 0){
    	cout<<seconds<<endl;
    	--seconds;
    }
    return 0;
}
'''
