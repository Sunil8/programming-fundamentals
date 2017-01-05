/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=program to print multiplication table using do-while loop.
Lab No.=25
BCS Sem.=1st
Date=jan 5,2017
*/

#include<stdio.h>
//#include<conio.h>


int main()
{
	int i=1,j,n,mul;
	printf("Enter number of terms to print multiplication table:");
	scanf("%d",&n);
	
	printf("The multiplication table upto %d are:\n",n);
	
	do
	{
		j=1;
		while(j<=10)
		{
			mul=i*j;
			printf("%d\t",mul);
			j++;
		}
		printf("\n");
		i++;
	}
	while(i<=n);
	return 0;
			
}
