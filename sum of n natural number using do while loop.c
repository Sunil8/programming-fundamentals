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
	int n,sum=0,i=0;
	printf("Enter value of n:\n");
	scanf("%d",&n);
	do
	{
		sum+=i;
		printf("sum of %d natural numbers=%d\n",i,sum);
		i++;
	}
	while(i<=n);
	return 0;
}
	
	
