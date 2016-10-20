/* 
Student Name= Sunil Giri 
Subject=Programming Fundamentals 
Roll No.=
Program=program to use Assignment Operator.
Lab No.=04
BCS Sem.=1st
Date=20th oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int a,b;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	printf("Use of Assignment Operator.\n");
	
	printf("value of a=%d\n",a);
	a+=b;
	printf("Use of '+='Operator:%d\n",a);
	
	printf("value of a=%d\n",a);
	a-=b;
	printf("Use of '-='Operator:%d\n",a);
	
	printf("value of a=%d\n",a);
	a*=b;
	printf("Use of '*='Operator:%d\n",a);
	
	printf("value of a=%d\n",a);
	a/=b;
	printf("Use of '/='Operator:%d\n",a);
	
	printf("value of a=%d\n",a);
	a%=b;
	printf("Use of '%%='Operator:%d\n",a);
	
	printf("value of a=%d\n",a);
	a=b;
	printf("Use of '=='Operator:%d\n",a);
	
	//getch();
	return 0;
}

	
	
