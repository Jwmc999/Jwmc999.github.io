#include<stdio.h>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))//The whole code shows reculsive algorithms.

void foo(char list[], int i, int n);

int main() {
	char list[] = { 'a','b','c' };
	foo(list, 0, 2);
	return 0;
}

void foo(char list[], int i, int n){//Therefore, in here, 'foo' is actually permutation
		int j, temp;
		if (i == n) {
			for (j = 0;j <= n;j++) printf("%c", list[j]);
			printf(" ");
		}
		else {
			for (j = i; j <= n; j++) {
				SWAP(list[i], list[j], temp);
				foo(list, i + 1, n);
				SWAP(list[i], list[j], temp);
			}
		}
	}//Question: Is it okay not to identify x, y, t?
