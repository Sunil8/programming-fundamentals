/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Print Area OF Sphere.
Lab No.:03
Date:18 sep,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float radius,area,volume;
	clrscr();
	printf("Radius of Sphere:\n");
	scanf("%f",&radius);
	area=3.14*4*pow(radius,2);
	printf("Area of Sphere=%f\n",area);
	volume=3.14*1.33*pow(radius,3);
	printf("Volume of Sphere=%f",volume);
	getch();
}