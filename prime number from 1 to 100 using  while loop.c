/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=program to print prime number between 1 to 100 using while loop.
Lab No.=25
BCS Sem.=1st
Date=jan 5,2017
*/

#include<stdio.h>
//#include<conio.h>


int main()
{
	int i=2,j,count;
	printf("Prime numbers between 1 to 100 are:\n");
	while(i<=100)
	{
		count=0;
		j=1;
		while(j<=i)
		{
			if(i%j==0)
			{
				count++;
			}
			j++;
		}
		if(count<3)
		{
		printf("%d  ",i);
		}
		i++;
	}
	return 0;
}
