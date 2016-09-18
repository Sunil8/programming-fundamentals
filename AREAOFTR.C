/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Print Area Of Trapezium.
Lab No.:05
Date:18 sep,2016
*/
#include<stdio.h>
#include<conio.h>

void main(){
	float a,b,height,area;
	clrscr();
	printf("Put Value of a:\n");
	scanf("%f",&a);
	printf("Put Value of b:\n");
	scanf("%f",&b);
	printf("Put Value of height:\n");
	scanf("%f",&height);
	area=0.5*(a+b)*height;
	printf("Area Of Trapezium=%f",area);
	getch();
}