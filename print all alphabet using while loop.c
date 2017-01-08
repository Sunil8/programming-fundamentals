/*
Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=program to print all alphabets using while loop.c
Lab No.=25
BCS Sem.=1st
Date=jan 8,2017
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
	char i='A';
	
	while(i<='Z'||i<='z')
	{
		printf("%c\t",i);
		if(i=='Z')
		{
			i='a';
			printf("\n\n");
			printf("%c\t",i);
		}
		i++;
	}
	return 0;
}
