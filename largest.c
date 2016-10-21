/* 
Student Name= Sunil Giri 
Subject=Programming Fundamentals 
Roll No.=
Program=program to find largest among three numbers.
Lab No.=05
BCS Sem.=1st
Date=21th oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n1,n2,n3;
	printf("Enter first Number:\n");
	scanf("%d",&n1);
	printf("Enter Second Number:\n");
	scanf("%d",&n2);
	printf("Enter Third Number:\n");
	scanf("%d",&n3);
	if(n1>=n2)
		if(n1>=n3){
			printf("%d is the largest Number.\n",n1);
		}
		else{
			printf("%d is the largest Number.\n",n3);
		}
	else if(n2>=n1)
	{
		if(n2>=n3){
			printf("%d is the largest Number.\n",n2);
					}
		else{
			printf("%d is the largest Number.\n",n3);
		}
	}
		
	//getch();
	return 0;
}
			
	
