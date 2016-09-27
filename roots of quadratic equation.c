/*
Student Name:Sunil Giri
Subject:Programming fundamentals
Roll No:
Program:Program to Print a Given Integer Is Zero,Negative or Positive.
Lab No:04
Date:27 sep,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
    float a,b,c,discriminant,r1,r2;
    printf("Enter the coefficent of x:");
    scanf("%f",&a);
    printf("Enter the coefficent of y:");
    scanf("%f",&b);
    printf("Enter the coefficent of z:");
    scanf("%f",&c);
    discriminant=pow(b,2)-(4*a*c);
    printf("discriminant=%f\n",discriminant);
    r1=(-b+sqrt(discriminant))/(2*a);
    r2=(-b-sqrt(discriminant))/(2*a);
    printf("root of quadratic equation=%f,%f",r1,r2);
    getch();
}
