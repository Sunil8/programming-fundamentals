/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=program to print fibonacci series upto ten terms.
Lab No.=21
BCS Sem.=1st
Date=27 dec,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int i,a=0,b=1,c=1;
	for(i=1;i<=10;i++)
	{
		printf("%d\t",c);
		c=a+b;
		a=b;
		b=c;
		
	}
	
	//getch();
	return 0;
}
