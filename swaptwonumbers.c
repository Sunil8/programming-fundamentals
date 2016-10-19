/* 
Student Name= Sunil Giri 
Subject=Programming Fundamentals 
Roll No.=
Program=program to Swap values of A and B. 
Lab No.=09
Date=19th oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int a,b,temp;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Swapping the value of a and b.\n");
	temp=a;
	a=b;
	b=temp;
	printf("Value of a=%d\n",a);
	printf("Value of b=%d",b);
	//getch();
	return 0;
}
	
	
	
