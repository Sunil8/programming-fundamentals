/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to print last digit of number and number without last digit.
Lab No.=17
BCS Sem.=1st
Date=24 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
	int n,rem,d;
	printf("Enter any number having more than 1 digit:");
	scanf("%d",&n);
	
	rem=n%10;
	d=n/10;
	printf("Last digit=%d\n",rem);
	printf("Number without last digit=%d\n",d);
	//getch();
	return 0;
}
	
