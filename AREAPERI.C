/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Print Area and Circumference of Circle.
Lab No.:02
Date:19 sep,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define p 3.14

void main(){
	float r,area,circumference;
	clrscr();
	printf("Enter Radius of Circle:\n");
	scanf("%f",&r);
	circumference=2*p*r;
	printf("Circumference of Circle=%f\n",circumference);
	area=p*pow(r,2);
	printf("Area of Circle=%f",area);
	getch();
}
