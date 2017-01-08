/*
Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=To check wheather year is leap year or not.
Lab No.=25
BCS Sem.=1st
Date=jan 8,2017
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
	int f;
	printf("Enter the year:");
	scanf("%d",&f);
	
	//((f%4==0 && f%100!=0) || f%400==0)?printf("The year is leap year"):printf("The year is not leap year");
	if(f%400==0)
	{
		printf("%d is leap year",f);
	}
	else if(f%4==0)
	{
		if(f%100!=0)
		{
			printf("%d is leap year",f);
		}
	
		else
			{
				printf("%d is non leap year",f);
			}
	}
	else
	{
		printf("%d is non leap year",f);
	}
	return 0;		
}
