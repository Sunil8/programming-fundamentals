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
    double n1, n2, n3;

    printf("Enter three numbers:\n ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if( n1>=n2 && n1>=n3 )
        printf("%lf is the largest number.", n1);

    if( n2>=n1 && n2>=n3 )
        printf("%lf is the largest number.", n2);

    if( n3>=n1 && n3>=n2 )
        printf("%lf is the largest number.", n3);
    getch();
}
