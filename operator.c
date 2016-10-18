/* 
Student Name= Sunil Giri 
Subject=Programming Fundamentals 
Roll No.=
Program=
Lab No.=08
Date=18th oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n1,n2,sum,mul,sub,div,mod;
	printf("Enter First Number:");
	scanf("%d",&n1);
	printf("Enter Second Number:");
	scanf("%d",&n2);
	printf("Use of '+' Operator\n");
	sum=n1+n2;
	printf("%d + %d=%d\n",n1,n2,sum);
	printf("Use of '-' Operator\n");
	sub=n1-n2;
	printf("%d - %d=%d\n",n1,n2,sub);
	printf("Use of '*' Operator\n");
	mul=n1*n2;
	printf("%d * %d=%d\n",n1,n2,mul);
	printf("Use of '/' Operator\n");
	div=n1/n2;
	printf("%d / %d=%d\n",n1,n2,div);
	printf("Use of '%%' Operator\n");
	mod=n1%n2;
	printf("%d %% %d=%d",n1,n2,mod);
	//getch();
	return 0;
}	
