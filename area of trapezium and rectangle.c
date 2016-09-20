/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Print Area of Trapezium and Rectangle.
Lab No.:03
Date:20 sep,2016
*/
#include<stdio.h>
#include<conio.h>

void main(){
    float base,other_side,height,area_of_trapezium,length,breadth,area_of_rectangle;
    printf("Enter the Base of Trapezium:\n");
    scanf("%f",&base);
    printf("Enter the Otherside of Trapezium:\n");
    scanf("%f",&other_side);
    printf("Enter the Height of Trapezium:\n");
    scanf("%f",&height);
    area_of_trapezium=0.5*(base+other_side)*height;
    printf("Area of Trapezium=%f\n",area_of_trapezium);
    printf("Enter the Length of Rectangle:\n");
    scanf("%f",&length);
    printf("Enter the Breadth of Rectangle:\n");
    scanf("%f",&breadth);
    area_of_rectangle=length*breadth;
    printf("Area of Rectangle=%f",area_of_rectangle);
    getch();
}
