---
layout: post
title: "Discount"
comments: true
permalink: /dowhile/
---
# Do While
A supermarket has launched a campaign offering a 15% discount on 3 items.
Write a program that takes the total price for every purchase as input and outputs the relevant discount.

Sample Input
15000
4000
6700

Sample Output
2250
600
1005

```cpp
#include <iostream>
using namespace std;

int main()
{
    int purchaseAmount = 0;
    double totalPrice;

    //your code goes here

    /*do{
    	int n;
    	cin>>n;
    	++purchaseAmount;
    	totalPrice= n* 0.15;
    	cout<<totalPrice<<endl;

    }while(purchaseAmount <3);*/
while(purchaseAmount<3){
	int n;
    	cin>>n;
    	totalPrice= n* 0.15;
    	cout<<totalPrice<<endl;
    	purchaseAmount++;
}

    return 0;
}
```
