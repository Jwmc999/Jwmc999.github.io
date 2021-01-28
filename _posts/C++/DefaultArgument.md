---
layout: post
title: "Default Argument"
comments: true
permalink: /defaultArgument/
---
# Default Argument

Example:
```cpp
#include <iostream>
using namespace std;

void sum(int a, int b=42) {
	cout << a + b << endl;
}

int main() {
	int x = 24;
	int y = 36;
	//calling the function with both parameters
	sum(x, y);
	//calling the function without b
	sum(x);
  return 0;
}
```

Your usual order at your favorite cafe is black tea, which the waiter brings you by default. Today, however, you are with your friend and it is his first time there. Obtain your friend's order in one word as input, and place the order for both of you. Complete the function so that it will output "Black tea" by default (without an argument) and then your friend's order as an argument.

Sample Input
Americano

Sample Output
Black tea
Americano

```cpp
#include <iostream>

using namespace std;

//complete the function with one default argument
//all default argument should start from right
void printOrder(string a, string b="Black tea") {
	cout<<b<<endl;
	cout<<a<<endl;
}

int main() {
    //getting coffee type
    string friendOrder;
    cin >> friendOrder;

    printOrder(friendOrder);

    return 0;
}
```
