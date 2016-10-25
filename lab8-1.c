/* 
Student Name= Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=program that takes three inputs from user and then print sum,average,product,largest and smallest of these numbers.
Lab No.=08
BCS Sem.=1st
Date=25 oct,2016
*/
#include<stdio.h>
//#include<conio.h>

int main(){
	int n1,n2,n3;
	printf("Enter first number:\n");
	scanf("%d",&n1);
	printf("Enter second number:\n");
	scanf("%d",&n2);
	printf("Enter third number:\n");
	scanf("%d",&n3);
	
	printf("Sum of %d,%d,%d=%d\n",n1,n2,n3,n1+n2+n3);
	
	printf("Product of %d,%d,%d=%d\n",n1,n2,n3,n1*n2*n3);
	
	printf("Average of %d,%d,%d=%d\n",n1,n2,n3,(n1+n2+n3)/3);
	
	(n1>=n2 && n1>=n3)? printf("%d is largest.\n",n1):(n2>=n1 && n2>=n3)? printf("%d is largest.\n",n2):printf("%d is largest.\n",n3);
	(n1<=n2 && n1<=n3)? printf("%d is smallest.\n",n1):(n2<=n1 && n2<=n3)? printf("%d is smallest.\n",n2):printf("%d is smallest.\n",n3);
	//getch();
	return 0;
}
	
	
	
	
