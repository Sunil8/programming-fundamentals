/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=program to print prime number between 1 to 100 using for loop.
Lab No.=25
BCS Sem.=1st
Date=jan 5,2017
*/

#include<stdio.h>
//#include<conio.h>


int main()
{
	int i,j,count;
	printf("Prime numbers between 1 to 100 are:\n");
	for(i=2;i<=100;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count<3)
		{
		printf("%d  ",i);
		}
	}
	return 0;
}
