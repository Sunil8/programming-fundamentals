/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to print square and cubes of first n natural numbers.
Lab No.=20
BCS Sem.=1st
Date=01 dec,2016
*/


#include<stdio.h>
//#include<conio.h>

int main(){
	int n,square,cube,i;
	
	printf("Enter any natural number:");
	scanf("%d",&n);
	
	printf("Square and Cubes from 1 to %d numbers are:\n\n",n);
	printf("squares \t cubes\n");
	
	for(i=1;i<=n;i++)
	{
		square=i*i;
		cube=i*i*i;
		printf("%d \t\t %d\n",square,cube);
	}
	
	
	
	//getch();
	return 0;
}
                                                                                                                                                                                                                                                                                
