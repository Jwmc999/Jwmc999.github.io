# Lecture1_Ex1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){//Further Questions: Why we should put 'void' in front of 'main'?
	1234 * 531;// At the end of command ;
	/* Command should be inside of token {}. We call this 'block'
	Block should be identified. Identifiers are followed by token ()
	Convert object code to executable code Linking 
	If there is only one block, identifier should be 'main' 
	//Two types of blocks: Compound Statement, Function Definition
	Further Questions: What is a difference between compound statement and function definition?
	*/
	printf("Print result\n");/* To see the result of computing, command printf() 
	LNK2019 unresolved external symbol _printf referenced in function _main. Followed by LNK1120 
	//Insert #include<stdio.h> in start. 
	Further questions: What was the cause? Why did #include<stdio.h> solve the error? */
	// To make executable file Compling + Linking. Solution Build 
	// '\n' change the line. Exception of printf function to print content inside " "
	printf("%d*%d\n", 1234, 531);
	// '%d' Format Specifier for integer. Another exception of printf 
	printf("%d*%d=%d", 1234, 531, 1234 * 531);
	// %d can also represent the result of mathematical expression if the result is integer

	int num1;// 'int' Type Specifier for integer variable 
	int num2;/* Data type:  
			 Integers (Whole number): char, int, short, long
			 Real number: float, double */
	num1 = 1234;// '=' Assignment Operator. Stores the values of the variables 
	num2 = 531;
	printf("%d*%d=%d\n", num1, num2, num1 * num2);
	// 'identifier' is the name of variable or function
	// 'Keyword' cannot be used as identifier
	
	int num3;
	int num4;
	int num5;
	int num6;
	scanf("%d", &num3);//'scanf' function receives inputs from user and store to variables, num1
	// Further Questions: meaning of '&' 
	// use different variables for multiple inputs. If not, new input will erase former data
	//scanf, printf require header <stdio.h>
	//define CRT_SECURE_NO_WARNINGS
	printf("Put 2 Integers (seperate by space): ");//notice user input data type
	scanf("%d %d", &num4, &num5); //space between specifiers. There can be multiple spaces for 1 space output 
	// scanf("%d, %d", &num4, &num5); // seperate by comma
	printf("%d*%d=%d\n", num4, num5, num4 * num5);
	/* Further Questions: In line 41, push Page Up button in CMD copy and paste input(s) of Line 36.
	Why does this happen?
	*/ 
	scanf("Put Integer: %d", &num6);// unvalid result. To output message, use printf   
}

