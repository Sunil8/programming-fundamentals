/*
Student Name:Sunil Giri
Subject:Programming Fundamentals
Roll No.:
Program:Program to Find Total Marks And Percentage of Marks Obtained By Students.
Lab No.:
Date:14 oct,2016
*/
#include<stdio.h>
#include<conio.h>

void main(){
    char name;
    float math,science,social,english,nepali,account,computer,marks,per;
    printf("Enter Student's Name:\n");
    scanf("%s",&name);
    printf("Enter the Marks Obtained in Math:");
    scanf("%f",&math);
    printf("Enter the Marks Obtained in Science:");
    scanf("%f",&science);
    printf("Enter the Marks Obtained in Social:");
    scanf("%f",&social);
    printf("Enter the Marks Obtained in English:");
    scanf("%f",&english);
    printf("Enter the Marks Obtained in Nepali:");
    scanf("%f",&nepali);
    printf("Enter the Marks Obtained in Account:");
    scanf("%f",&account);
    printf("Enter the Marks Obtained in Computer:");
    scanf("%f",&computer);
    if(math<=100 && science<=100 && social<=100 && english<=100 &&nepali<=100 && account<=100 && computer<=100)
    {
       marks=math+science+social+english+nepali+account+computer;
       printf("Total Marks Obtained=%f\n",marks);
       per=marks/800*100;
       printf("Total percentage=%f%",per);
    }
    else
    {
        printf("INVALID MARKS");
    }
    getch();
}
