/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Print Square of Any Numbers.
Lab No.:01
Date:18 sep,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float Number,square;
	clrscr();
	printf("Enter a Number:\n");
	scanf("%f",&Number);
	square=pow(Number,2);
	printf("Square of the Number=%f",square);
	getch();
}