/* 
Student Name= Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to print odd or even number using terniary operator.
Lab No.=08
BCS Sem.=1st
Date=24 oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int a;
	printf("Enter first number:\n");
	scanf("%d",&a);
	(a%2==0)?printf("%d is even number.\n",a):printf("%d is odd number.\n",a);
	//getch);
	return 0;
}
