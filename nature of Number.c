/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to find Greatest Between Three No.
Lab No.:
Date:14 oct,2016
*/
#include<stdio.h>
#include<conio.h>

void main(){
    double a;
    printf("Enter a Number:");
    scanf("%lf",&a);
    if(a>0)
        printf("%lf is Positive",a);
    else if(a<0)
        printf("%lf is Negative",a);
    else
        printf("The Number is Zero");
    getch();
}
