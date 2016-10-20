/* 
Student Name= Sunil Giri 
Subject=Programming Fundamentals 
Roll No.=
Program=program to find leap or non leap year.
Lab No.=03
BCS Sem.=1st
Date=19th oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int f;
	printf("Enter the last date of feb.:");
	scanf("%d",&f);
	if(f==28){
		printf("The year is Non Leap Year\n");
	}
	else if(f==29){
		printf("The year is Leap Year\n");
	}
	else
		printf("Invalid Date\n");
	//getch();
	return 0;
}
