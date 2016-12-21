/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to find sum of digits of number.
Lab No.=19
BCS Sem.=1st
Date=29 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n,rem,sum=0;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	//for(;n>0;)
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	printf("Sum of digits=%d\n",sum);
	
	//getch();
	return 0;
}
