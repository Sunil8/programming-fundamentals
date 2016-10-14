/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Find Area of Triangle.
Lab No.:
Date:14 oct,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
    float s,a,b,c,area;
    printf("Enter First Side:");
    scanf("%f",&a);
    printf("Enter Second Side:");
    scanf("%f",&b);
    printf("Enter Third Side:");
    scanf("%f",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area Of Triangle=%f",area);
    getch();
}
