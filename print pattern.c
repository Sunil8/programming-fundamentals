/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=
Lab No.=24
BCS Sem.=1st
Date=jan 3,2017
*/

#include<stdio.h>
//#include<conio.h>


int main()
{
	int i,j,n=5;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<i)
			{
				printf("   ");
			}
			else
			{
				printf("*  ");
			}
		}
		printf("\n");
	}
	return 0;
}
