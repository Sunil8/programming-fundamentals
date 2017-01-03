/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=program to print fibonacci series upto n terms.
Lab No.=24
BCS Sem.=1st
Date=jan 3,2017
*/

#include<stdio.h>
//#include<conio.h>


int main()
{
	int n,i=1,a=0,b=1,c=1;
	
	printf("Enter number to find fibonacci series upto number terms:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\t",c);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	
}
