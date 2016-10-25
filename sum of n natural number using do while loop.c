/* 
Student Name= Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=sum of n natural number.
Lab No.=08
BCS Sem.=1st
Date=25 oct,2016
*/
#include<stdio.h>

int main(){
	int n,sum=0,a;
	printf("Enter value of n:\n");
	scanf("%d",&n);
	a=n;
	do
	{
		sum+=a;
		a--;
	}
	while(a>0);
	printf("sum of numbers=%d\n",sum);
	return 0;
}
	
	
	
