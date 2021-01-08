---
layout: post
title: "Passing Arrays"
comments: true
permalink: /PassArrays/
---
# Passing Arrays
A local supermarket is running a promotion: each Nth customer will receive one item for free. Customers names are sequentially given as array of strings (see template).
Write a function that receives the array of customers, its size, and the N number as arguments, and  prints the names of the lucky customers each in a new line.

Sample Input
3

Sample output
Rayan
Bruce
Richard
Mary

#include <iostream>
#include <string>
using namespace std;

//complete the function
void winners(string visitor[], int size, int N) {
    for(int i=1; i <= size; i++){
    if(i % N == 0)
    cout<<visitor[i-1]<< endl;
}

}

int main() {

    string customers[] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul"};

    //getting the lucky number as input
    int n;
    cin >> n;
    //call function
    winners(customers, 13, n);
    
    return 0;
}
