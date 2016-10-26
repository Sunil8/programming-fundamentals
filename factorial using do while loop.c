/* 
Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to calculate factorial using do while loop.
Lab No.=09
BCS Sem.=1st
Date=26 oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n,fact,a;
	g:
	printf("Enter Number to calculate factorialo:\n");
	scanf("%d",&n);
	a=1;
	fact=1;
	do
	{
		fact*=a;
		a++;
	}
	while(a<=n);
	printf("The factorial of %d is %d\n",n,fact);
	goto g;
	//getch();
	return 0;
}
	
