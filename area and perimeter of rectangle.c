/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Find Area and Perimeter Of Rectangle.
Lab No.:
Date:14 oct,2016
*/
#include<stdio.h>
#include<conio.h>

void main(){
    float l,b,a,p;
    printf("Enter Length of Rectangle:");
    scanf("%f",&l);
    printf("Enter Breadth of Rectangle:");
    scanf("%f",&b);
    p=2*(l+b);
    printf("Perimeter of Rectangle=%f\n",p);
    a=l*b;
    printf("Area of Recrangle=%f",a);
    getch();
}
