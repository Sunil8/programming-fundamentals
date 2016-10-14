/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Convert degree centigrade into Fahrenheit.
Lab No.:
Date:14 oct,2016
*/
#include<stdio.h>
#include<conio.h>

void main(){
    float c,f;
    printf("Enter the Temperature in Degree Centigrade:");
    scanf("%f",&c);
    f=(180*c+3200)/100;
    printf("%f degree Centigrade into Fahrenheit=%f",c,f);
    getch();
}
