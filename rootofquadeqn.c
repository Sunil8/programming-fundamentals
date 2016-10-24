/* 
Student Name= Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to find roots od quadr. equation.
Lab No.=07
BCS Sem.=1st
Date=24 oct,2016
*/

#include<stdio.h>
//#include<conio.h>
#include<math.h>

int main(){
	float a,b,c,dis,root1,root2;
	printf("Enter the value of a:\n");
	scanf("%f",&a);
	printf("Enter the value of b:\n");
	scanf("%f",&b);
	printf("Enter the value of c:\n");
	scanf("%f",&c);
	dis=sqrt(b*b-4*a*c);
	if(dis>=0){
		root1=(-b+dis)/(2*a);
		root2=(-b-dis)/(2*a);
		printf("roots of given quad. equation:%.2f %.2f\n",root1,root2);
	}
	else{
		printf("Root is Imaginary.\n");
	}
	//getch();
	return 0;
}
	
