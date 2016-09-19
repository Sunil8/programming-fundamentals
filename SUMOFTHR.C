/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Print Sum of Three Numbers.
Lab No.:02
Date:19 sep,2016
*/
#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,c,sum;
	clrscr();
	printf("Enter First Number:\n");
	scanf("%d",&a);
	printf("Enter Second Number:\n");
	scanf("%d",&b);
	printf("Enter Third Number:\n");
	scanf("%d",&c);
	sum=a+b+c;
	printf("Sum of Three Numbers %d,%d,%d=%d",a,b,c,sum);
	getch();
}
