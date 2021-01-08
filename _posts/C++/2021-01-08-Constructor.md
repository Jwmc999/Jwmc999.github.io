---
layout: post
title: "Constructor"
comments: true
permalink: /constructor/
---
# Constructor
The given program defines a Painting class and creates an object using the constructor.
Fix the code so that the constructor takes the name as the argument and outputs it.

Sample Input
Ocean

Sample Output
Ocean

Tip: The constructor should take one string as the argument and output it.

Answer1:
```cpp
#include <iostream>
#include <string>
using namespace std;

class Painting {
    private:
    	string name;
    public:
        //define the constructor
      Painting(string nm){
      	setTitle(nm);
      }

      void setTitle(string x){
	name = x;
	cout<<name<<endl;
}
		string getTitle(){
			return name;
		}
};
int main() {
    string name;
    cin >> name;

    Painting painting(name);

    return 0;
}
```

Answer2:
```cpp
#include <iostream>
#include <string>
using namespace std;

class Painting {
    public:
        //define the constructor
      Painting(string nm){
      	setTitle(nm);
      }

      void setTitle(string x){
	name = x;
}
		string getTitle(){
			return name;
		}
		private:
    		string name;
};
int main() {
    string name;
    cin >> name;

    Painting painting(name);
    cout<<painting.getTitle()<<endl;

    return 0;
}
```
