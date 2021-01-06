---
layout: default
title: "int, double, float"
---
# Which data type?
Write a program that takes body temperature in Celsius as input.
If it is in range from 36.1 to 36.9 (not inclusive) print "OK", otherwise print “Not OK”.

Sample Input
37.2

Sample Output
Not OK

'''cpp
#include <iostream>
using namespace std;

int main() {
    //your code goes here   
    double degree;
    cin>>degree;
    if(degree > 36.1 && degree < 36.9)
{
	cout<<"OK"<<endl;
}
else{
	cout<<"Not OK"<<endl;
}

return 0;
}
'''
