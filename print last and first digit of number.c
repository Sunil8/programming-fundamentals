/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to print first and last digit of a number.
Lab No.=19
BCS Sem.=1st
Date=29 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n,rem,o;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	o=n;
	
	while(n>0)
	{
		rem=n%10;
		n/=10;
	}
	
	printf("Last digit= %d\n",o%10);
	printf("First digit = %d",rem);
	
	//getch();
	
	return 0;
}
