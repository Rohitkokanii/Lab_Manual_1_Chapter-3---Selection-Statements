/*
Lab-Exercise 8
Using a switch-case construct, write a menu driven program to perform basic calculations (addition, subtraction,
multiplication and division) on two numbers accepted from the user.
*/

#include<stdio.h>

int main() {
	int choice;
	int n1, n2;
	printf("\nEnter two no. = ");
	scanf_s("%d%d", &n1, &n2);
	printf("Enter \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Exit \n= ");
	scanf_s("%d", &choice);


	switch (choice) {

	case 1:printf("\nAddition = %d\n", n1 + n2);
		break;
	case 2:printf("\nSubtraction %d\n", n1 - n2);
		break;
	case 3:printf("\nMultiplication %d\n", n1 * n2);
		break;
	case 4:printf("\nDivision %g\n", (float)n1 / n2);
		break;
	case 5:printf("\nThank You!\n");
		break;
	default:printf("\nInvalid Input\n");

	}

	return 0;
}