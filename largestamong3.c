/* 
Student Name= Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=
Lab No.=08
BCS Sem.=1st
Date=24 oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n1,n2,n3;
	printf("Enter first number:\n");
	scanf("%d",&n1);
	printf("Enter second number:\n");
	scanf("%d",&n2);
	printf("Enter third number:\n");
	scanf("%d",&n3);
	(n1>=n2 && n1>=n3)?printf("%d is largest.\n",n1):(n2>=n1 && n2>=n3)?printf("%d is largest.\n",n2):printf("%d is largest.\n",n3);
	//getch();
	return 0;
}
