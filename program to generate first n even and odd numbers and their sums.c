/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to generate first n even and odd numbers and their seperate sum.
Lab No.=16
BCS Sem.=1st
Date=22 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n,i,sum1=0,sum2=0;
	
	printf("Enter any natural number:");
	scanf("%d",&n);
	
	printf("Even numbers upto %d are:\n",n);
	for(i=1;i<=n;i++)
	{
			if(i%2==0)
			{
				
				printf("%d\n",i);
				sum1+=i;
				
			}
	}
	printf("Sum of first %d even numbers=%d\n",n,sum1);
	
	printf("Odd numbers upto %d are:\n",n);
	
	for(i=1;i<=n;i++)
	{
			if(i%2!=0) 
			{
					printf("%d\n",i);
					sum2+=i;
			}
	}
	printf("Sum of first %d odd numbers=%d\n",n,sum2);
	//getch();
	
	return 0;
}
				
