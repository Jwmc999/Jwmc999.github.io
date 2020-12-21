---
layout: post
title: Lecture2_Summary O1
---
# Array
## A data structure consisting of a collection of _**values**_
## Each identified by array _**index**_
- In C/C++/Java programming languages, array index begins from 0.
  The range of array index is [0, size -1].
```c
int score[10];//Data type Array name [Array size];
```
## In C/C++ programming language,
- A consecutive set of memory location
- Logical order is the same as the physical order
- Creation of an array
```c
Type d[10];
Type *d = new Type[size];//Dynamically assign the size of the array. 1) Declare the type and d as pointers 2) Use "new" operator 
// We can assign the size of the array according to the specific number
```
- Accessing an element by array index
```c
d[5] = 2;
```
- Release the allocated
```c
delete [] d;
```
# Creation of Arrays in C++ Programming Language
## 1-dimmensional array
- int arr[10];
- int *arr = new int[10];
## 2-dimensional array
- int a[3][4];
- int **a = new int *[3];
  for(int i=0;i<3;i++)
      a[i] = new int[4];

# Array in Memory
```c
int score[3] = {52, 17, 61};
// When we declare an array, each value gets stored sequentially in the actual RAM.
```
# Example
```c
int matrix[6][6];

for(int row = 0; row<6; row++)
{
  for(int col = 0; col <6; col++)
  {
  
  
  
  }
}
```
