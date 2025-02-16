/*
Exercise 6-1;
Problem Statement
Write a program to find leap year by using if-else and logical operators (&& and I I ).
(A Leap year is divisible by 4 and is not divisible by 100 but could be divisible by 400)
*/

#include<stdio.h>

int main(){
	int year;
	printf("Enter Year = ");
	scanf_s("%d", &year);

	if (year % 100 == 0) {
		if (year % 400 == 0) {
			printf("\nleap year!!\n");
		}
		else {
			printf("\nNot leap year\n");
		}
	}
	else if(year%4==0) {
		printf("\nleap year\n");
	}
	else {
		printf("\nnot leap year\n");
	}

	return 0;
}
