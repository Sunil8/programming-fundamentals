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

void main(){
    float b,h,area;
    printf("Enter Base Of Triangle:");
    scanf("%f",&b);
    printf("Enter Height Of Triangle:");
    scanf("%f",&h);
    area=0.5*b*h;
    printf("Area Of Triangle=%f",area);
    getch();
}

