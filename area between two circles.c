/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Find Area Between Two Circles.
Lab No.:
Date:14 oct,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define p 3.14

void main(){
    double r1,r2,a1,a2,area;
    printf("Enter the Radius of First Circle:");
    scanf("%lf",&r1);
    a1=p*pow(r1,2);
    printf("Area Of First Circle=%lf\n",a1);
    printf("Enter the Radius of Second Circle:");
    scanf("%lf",&r2);
    a2=p*pow(r2,2);
    printf("Area Of Second Circle=%lf\n",a2);
    if(a1>a2)
    {
        area=a1-a2;
        printf("Area Between Two Circle=%lf",area);
    }
    else
    {
        area=a2-a1;
        printf("Area Between Two Circle=%lf",area);
    }
    getch();
}


