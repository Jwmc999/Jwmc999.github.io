---
layout:default
title:"Countdown"
---
# Do While Loop
You need to make a countdown app.
Given a number N as input, output numbers from N to 1 on separate lines. 
Also, when the current countdown number is a multiple of 5, the app should output "Beep".

Sample Input:
12

Sample Output: 
12
11
10
Beep
9
8
7
6
5
Beep
4
3
2
1

'''cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    //your code goes here
    
    do{
     cout<<n<<endl;
    	if(n%5 ==0){
    		cout<<"Beep"<<endl;
    	}
     n--;
    	
    }while(n>=1);
    
    return 0;
}
'''
