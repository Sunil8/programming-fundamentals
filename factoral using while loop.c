/* 
Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to calculate factorial using while loop.
Lab No.=09
BCS Sem.=1st
Date=26 oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n,fact,a;
	g:
	printf("Enter Number to calculate factorial:\n");
	scanf("%d",&n);
	a=n;
	fact=1;
	while(a>0){
		fact*=a;
		a--;
	}
	printf("The factorial of %d is %d\n",n,fact);
	goto g;
	//getch();
	return 0;
}
	
