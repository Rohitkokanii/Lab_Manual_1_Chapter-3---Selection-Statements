/*
Lab Exercise 6-2;

Problem Statement
Write a program to find leap year by using conditional or the ternary operator ( ? : ).
(A Leap year is divisible by 4 and is not divisible by 100 but could be divisible by 400)
*/

#include<stdio.h>

int main() {
	int year;
	printf("Enter Year = ");
	scanf_s("%d", &year);

	(year % 100 == 0) ? (year % 400 == 0) ? printf("\nleap year\n") : printf("\nnot leap year\n") : (year % 4 == 0) ? printf("\nleap year\n") : printf("\nnot leap year\n");
	
	return 0;
}