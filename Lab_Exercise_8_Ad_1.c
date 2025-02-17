//Write a program to find maximum of 3 numbers using conditional operator.

#include<stdio.h>

int main() {
	int n1,n2,n3;
	printf("\nEnter Three No. ");
	scanf_s("%d%d%d", &n1, &n2, &n3);

	int max = (n1 > n2 && n1 > n3) ? n1 : (n2 > n1 && n2 > n3) ? n2 : n3;

	printf("\nMax is = %d\n",max);

	return 0;
}
