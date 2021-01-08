---
layout: post
title: "Smallest Element: array"
comments: true
permalink: /smallest/
---
# Discount Program
You are working on a ticketing system. A ticket costs $10.
The office is running a discount campaign: each group of 5 people is getting a discount, which is determined by the age of the youngest person in the group.
You need to create a program that takes the ages of all 5 people as input and outputs the total price of the tickets.

Sample Input:
55
28
15
38
63

Sample Output:
42.5


```cpp
#include <iostream>
using namespace std;

int main() {
    int ages[5];
    int min = ages[0];
    double price;
    double dis;

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
        if(min>ages[i])
        	min = ages[i];
    }

    dis = min*0.01;
    price= 10*5;

    price *= (1-dis);

	cout<<price<<endl;

    return 0;
}
```

* Declaring dynamic Memory for ages gives wrong answer, unlike **[Dynamic Memory]()** practice on the largest element.
(Need more knowledge & practice on Dynamic Memory)

```cpp
    int *ages = NULL;
    ages = new int[5];
```
