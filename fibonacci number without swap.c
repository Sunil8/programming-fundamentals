/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=program to print fibonacci series upto n terms without swap.
Lab No.=22
BCS Sem.=1st
Date=29 dec,2016
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
	int n,i,a=1,b=1;
	printf("Enter number to print fubonacci numbers upto the number terms:");
	scanf("%d",&n);
	printf("The fibonacci series upto %d terms:\n",n);
	for(i=1;i<=n/2;i++)
	{
		printf("%d\t",a);
		printf("%d\t",b);
		a=a+b;
		b=a+b;
	}
	if(n%2!=0)
	{
		printf("%d",a);
	}
	//getch();
	return 0;
}


