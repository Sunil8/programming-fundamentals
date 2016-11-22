/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to find sum of square of first n natural number.
Lab No.=16
BCS Sem.=1st
Date=22 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n,i,sum=0;
	
	printf("Enter any natural number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		sum+=i*i;
		printf("Sum of square of %d natural numbers=%d",n,sum);
	
	//getch();
	return 0;
}
	
