/* 
Student Name= Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to take two no. from user and print largest or smallest using terniary operator.
Lab No.=08
BCS Sem.=1st
Date=24 oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n1,n2;
	printf("Enter first Number:\n");
	scanf("%d",&n1);
	printf("Enter Second Number:\n");
	scanf("%d",&n2);
	(n1>=n2)?printf("%d is largest.\n",n1):printf("%d is largest.\n",n2);
	//getch();
	return 0;
}
	
