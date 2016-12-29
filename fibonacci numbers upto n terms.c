/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=program to print fibonacci series upto n terms.
Lab No.=22
BCS Sem.=1st
Date=29 dec,2016
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
	int n,i,a=0,b=1,c=1;
	printf("Enter number to print fubonacci numbers upto the number terms:");
	scanf("%d",&n);
	printf("The fibonacci series upto %d terms:\n",n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",c);
		c=a+b;
		a=b;
		b=c;
	}
	//getch();
	return 0;
}


