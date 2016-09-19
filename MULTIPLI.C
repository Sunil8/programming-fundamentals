/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Print Multiplication of Three Numbers.
Lab No.:02
Date:19 sep,2016
*/
#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,c,mul;
	clrscr();
	printf("Enter First Number:\n");
	scanf("%d",&a);
	printf("Enter Second Number:\n");
	scanf("%d",&b);
	printf("Enter Third Number:\n");
	scanf("%d",&c);
	mul=a*b*c;
	printf("Multiplication of Three Numbers %d,%d,%d=%d",a,b,c,mul);
	getch();
}