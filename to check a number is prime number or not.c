/* 
Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to check a number is prime number or not.
Lab No.=11
BCS Sem.=1st
Date=03 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n,i,count=0;
	printf("Enter any number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(n%i==0){
				count++;
			}
		if(count>2){
			
			printf("%d is not prime number.\n",n);
		}
	else{
		printf("%d is prime number.\n",n);
	}
	//getch();
	return 0;
}
	
