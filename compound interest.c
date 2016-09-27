/*
Student Name:Sunil Giri
Subject:Programming fundamentals
Roll No:
Program:Program to Print Compound Interest Using Formula.
Lab No:04
Date:27 sep,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
    float principal,time,rate,compound_interest;
    printf("Enter Principal:\n");
    scanf("%f",&principal);
    printf("Enter Rate:\n");
    scanf("%f",&rate);
    printf("Enter Time:\n");
    scanf("%f",&time);
    compound_interest=principal*pow(1+0.01*rate,time)-principal;
    printf("Compound Interest=%f",compound_interest);
    getch();
}
