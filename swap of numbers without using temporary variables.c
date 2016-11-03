/* 
Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to swap numbers without using temporary variables.
Lab No.=11
BCS Sem.=1st
Date=03 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n1,n2;
	printf("Enter first number:\n");
	scanf("%d",&n1);
	printf("Enter second number;\n");
	scanf("%d",&n2);
	n1=n1-n2;
	n2=n1+n2;
	n1=n2-n1;
	printf("Swap of numbers.\n"); 
	printf("n1=%d\n",n1);
	printf("n2=%d\n",n2);
	//getch();
	return 0;
}

