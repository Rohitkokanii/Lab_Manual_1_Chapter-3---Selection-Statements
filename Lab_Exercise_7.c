/*
Lab Exercise 7

Problem Statement
Write a program to accept the basic salary and total sales amount for a salesperson and calculate commission
according to the sales amount. Display the net salary and the commission earned. The range is as follows —
*/

#include<stdio.h>

int main() {
	int basic_salary,total_sales;
	float commission;

	printf("Enter Basic Salary = ");
	scanf_s("%d", &basic_salary);

	printf("\nEnter Total sales Amount = ");
	scanf_s("%d", &total_sales);

	if (total_sales >= 5000 && total_sales <= 7500) {
		//3%
		commission = ((float)3 / 100) * total_sales;
	}
	else if(total_sales >= 7501 && total_sales <= 10500){
		//8%
		commission = ((float)8 / 100) * total_sales;
	}
	else if (total_sales >= 10501 && total_sales <= 15000) {
		//11%
		commission = ((float)11 / 100) * total_sales;
	}
	else {
		//15%
		commission = ((float)15 / 100) * total_sales;
	}
	float net_salary = basic_salary + commission;

	printf("\nBasic Salary = %d\n\nTotal Sales = %d \n\nNet Salary = %g\n\nCommission Earned = %g\n",basic_salary,total_sales,net_salary,commission);
	return 0;
}