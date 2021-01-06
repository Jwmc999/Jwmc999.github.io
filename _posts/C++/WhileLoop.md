---
layout:default
title: "Multiple of 3"
---
You are given a program that outputs all the numbers from 0 to 20.
Change the code to make it output only numbers that are multiples of 3.

'''cpp
#include <iostream>
using namespace std;

int main()
{
    //change the code
    int num = 0;
    
    while(num<=20){
    num+= 3;
    if(num<=20)
    cout<<num<<endl;
    }
    return 0;
}
'''
