/*
Students Name:Sunil Giri
Roll No.:24
Lab No:15
Subject: Programming Fundmentals
Program: menu base c program to calculate area and perimeter of rectangle and area of trapezium.
Date:20 nov,2016

*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int o,l1,b1,area1,l2,b2,peri;
	float a,c,h,area2;
	
	g:
	
	printf("**************************************\n");
	printf("**      MENU BASE PROGRAM.          **\n");
	printf("**                                  **\n");
	printf("**      Enter any of below:         **\n");
	printf("**                                  **\n");
	printf("**   1. Area of Rectangle.          **\n");
	printf("**   2. Perimeter of Rectangle.     **\n");
	printf("**   3. Area of Trapezium.          **\n");
	printf("**   4. Exit                        **\n");
	printf("**                                  **\n");
	printf("**************************************\n");
	
	printf("Enter number of program to run:");
	scanf("%d",&o);
	
	switch(o)
	{
		case 1:
			printf("Program to calculate Area of Rectangle.\n");
			printf("Enter length of rectangle:");
			scanf("%d",&l1);
			printf("Enter breadth of rectangle:");
			scanf("%d",&b1);
			
			area1=l1*b1;
			printf("Area of rectangle=%d\n\n",area1);
			goto g;
			break;
			
		
		 case 2:
			printf("Program to calculate Perimeter of Rectangle.\n");
			printf("Enter length of rectangle:");
			scanf("%d",&l2);
			printf("Enter breadth of rectangle:");
			scanf("%d",&b2);
			
			peri=2*(l2+b2);
			
			printf("Perimeter of rectangle=%d\n\n",peri);
			goto g;
			break;
			
		 case 3:
		 	printf("program to calculate area of trapezium.\n");
			printf("Enter base of one side of trapezium:");
			scanf("%f",&a);
			printf("Enter base of another side of trapezium:");
			scanf("%f",&c);
			printf("Enter height of trapezium:");
			scanf("%f",&h);
			
			area2=0.5*(a+c)*h;
			
			printf("Area of trapezium=%f\n\n",area2);
			goto g;
			break;
			
		case 4:
			printf("Exit\n");
			break;
		default:
			printf("Invalid! program\n");
			printf("Try again.\n\n");
			goto g;
				
			
	}
	
	
	//getch();
	return 0;
	
}
	
