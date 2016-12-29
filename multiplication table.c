/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=program to display multiplication table upto n.
Lab No.=22
BCS Sem.=1st
Date=29 dec,2016
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
	int n,i,j,mul;
	printf("Enter value of n to display multiplication table upto n numbers:\n");
	scanf("%d",&n);
	
	printf("Multiplication upto %d are:\n",n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
			mul=i*j;
			printf("%d\t",mul);
		}
		printf("\n");
	}
	//getch();
	return 0;
}
