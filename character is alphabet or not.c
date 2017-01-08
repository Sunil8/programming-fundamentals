/*
Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=
Lab No.=25
BCS Sem.=1st
Date=jan 8,2017
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
	char a;
	printf("Enter any character:");
	scanf("%c",&a);
	
	((a>='A' && a<='Z') || (a>='a' && a<='z'))?printf("%c is an alphabet",a):printf("%c is not an alphabet",a);
	return 0;
}
