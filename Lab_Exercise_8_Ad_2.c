//Enter date in dd/mm/yy format. Write a program to print total number of days in a month and the month
//in words.For example, if date is entered as 23 / 07 / 2009 then display the message as - July has 31 days.
//Your program should take care of leap years.

#include<stdio.h>

int main() {
	int day, month, year;

	printf("\nEnter date in dd mm yy format = ");
	scanf_s("%d%d%d",&day,&month,&year);

	if (year % 100 == 0) {
		if (year % 400 == 0) {
			//leap year
			printf("\nLeap Year :- \n");
			if ((day >= 01 && day <= 31) && (month >= 01 && month <= 12)) {
				if (month == 01) {
					printf("\nJanuary has 31 days\n");
				}
				else if (month == 02) {
					printf("\nFebruary has 29 days\n");
				}
				else if (month == 03) {
					printf("\nMarch has 31 days\n");
				}
				else if (month == 04) {
					printf("\nApril has 30 days\n");
				}
				else if (month == 05) {
					printf("\nMay has 31 days\n");
				}
				else if (month == 06) {
					printf("\nJune has 30 days\n");
				}
				else if (month == 07) {
					printf("\nJuly has 31 days\n");
				}
				else if (month == 8) {
					printf("\nAugust has 31 days\n");
				}
				else if (month == 9) {
					printf("\nSeptember has 30 days\n");
				}
				else if (month == 10) {
					printf("\nOctoberhas 31 days\n");
				}
				else if (month == 11) {
					printf("\nNovember has 30 days\n");
				}
				else if (month == 12) {
					printf("\nDecember has 31 days\n");
				}
			}
		}
		else {
			//not leap year
			printf("\nNot Leap Year :- \n");
			if ((day >= 01 && day <= 31) && (month >= 01 && month <= 12)) {
				if (month == 01) {
					printf("\nJanuary has 31 days\n");
				}
				else if (month == 02) {
					printf("\nFebruary has 28 days\n");
				}
				else if (month == 03) {
					printf("\nMarch has 31 days\n");
				}
				else if (month == 04) {
					printf("\nApril has 30 days\n");
				}
				else if (month == 05) {
					printf("\nMay has 31 days\n");
				}
				else if (month == 06) {
					printf("\nJune has 30 days\n");
				}
				else if (month == 07) {
					printf("\nJuly has 31 days\n");
				}
				else if (month == 8) {
					printf("\nAugust has 31 days\n");
				}
				else if (month == 9) {
					printf("\nSeptember has 30 days\n");
				}
				else if (month == 10) {
					printf("\nOctoberhas 31 days\n");
				}
				else if (month == 11) {
					printf("\nNovember has 30 days\n");
				}
				else if (month == 12) {
					printf("\nDecember has 31 days\n");
				}
			}
		}
	}
	else if(year%4==0){
		//leap year 
		printf("\nLeap Year :- \n");
		if ((day >= 01 && day <= 31) && (month >= 01 && month <= 12)) {
			if (month == 01) {
				printf("\nJanuary has 31 days\n");
			}
			else if (month == 02) {
				printf("\nFebruary has 29 days\n");
			}
			else if (month == 03) {
				printf("\nMarch has 31 days\n");
			}
			else if (month == 04) {
				printf("\nApril has 30 days\n");
			}
			else if (month == 05) {
				printf("\nMay has 31 days\n");
			}
			else if (month == 06) {
				printf("\nJune has 30 days\n");
			}
			else if (month == 07) {
				printf("\nJuly has 31 days\n");
			}
			else if (month == 8) {
				printf("\nAugust has 31 days\n");
			}
			else if (month == 9) {
				printf("\nSeptember has 30 days\n");
			}
			else if (month == 10) {
				printf("\nOctoberhas 31 days\n");
			}
			else if (month == 11) {
				printf("\nNovember has 30 days\n");
			}
			else if (month == 12) {
				printf("\nDecember has 31 days\n");
			}
		}
	}
	else {
		//not leap year
		printf("\nNot Leap Year :- \n");
		if ((day >= 01 && day <= 31) && (month >= 01 && month <= 12)) {
			if (month == 01) {
				printf("\nJanuary has 31 days\n");
			}
			else if (month == 02) {
				printf("\nFebruary has 28 days\n");
			}
			else if (month == 03) {
				printf("\nMarch has 31 days\n");
			}
			else if (month == 04) {
				printf("\nApril has 30 days\n");
			}
			else if (month == 05) {
				printf("\nMay has 31 days\n");
			}
			else if (month == 06) {
				printf("\nJune has 30 days\n");
			}
			else if (month == 07) {
				printf("\nJuly has 31 days\n");
			}
			else if (month == 8) {
				printf("\nAugust has 31 days\n");
			}
			else if (month == 9) {
				printf("\nSeptember has 30 days\n");
			}
			else if (month == 10) {
				printf("\nOctoberhas 31 days\n");
			}
			else if (month == 11) {
				printf("\nNovember has 30 days\n");
			}
			else if (month == 12) {
				printf("\nDecember has 31 days\n");
			}
		}
	}

	
	return 0;
}