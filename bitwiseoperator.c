/* 
Student Name= Sunil Giri 
Subject=Programming Fundamentals 
Roll No.=
Program=program to use bitwise operator.
Lab No.=03
BCS Sem.=1st
Date=19th oct,2016
*/
#include<stdio.h>
//#include<conio.h>

int main(){
	int a,b;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	printf("Use of bit Operator");
	printf("Use of '&' Operator\n");
	printf("%d&%d=%d\n",a,b,a&b);
	printf("Use of '|' Operator\n");
	printf("%d|%d=%d\n",a,b,a|b);
	printf("Use of '~' Operator\n");
	printf("%d~=%d\n",a,~a);
	printf("%d~=%d\n",b,~b);
	printf("Use of '^' Operator\n");
	printf("%d^%d=%d\n",a,b,a^b);
	
	
	//getch();
	return 0;
}
