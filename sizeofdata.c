/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Print Size of Data Type.
Lab No.:03
Date:20 sep,2016
*/
#include<stdio.h>
#include<conio.h>

void main(){
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("Size of Int=%ld Bytes\n",sizeof(intType));
    printf("Size of Float=%ld Bytes\n",sizeof(floatType));
    printf("Size of Char=%ld Bytes\n",sizeof(charType));
    printf("Size of Double=%ld Bytes",sizeof(doubleType));
    getch();

}

