---
layout:default
title:"Travel Distance"
---
# For Loop

You are on a 5 hour sea voyage. The ship sails at a speed of 40 km per hour. Write a program that will output how many kilometres the ship has traveled by each hour.


'''cpp
#include <iostream>

using namespace std;

int main()
{
    int distance = 0;
    //your code goes here
    for(int hour =1; hour <=5; hour++){ 

distance = hour*40;
cout<<distance<<endl;

}
    return 0;
}
'''
