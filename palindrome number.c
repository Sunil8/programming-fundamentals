/* 
Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to check given no is palindrome or not.
Lab No.=12
BCS Sem.=1st
Date=06 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n,reverse=0,original,rem=0;
	
	printf("Enter any number:\n");
	scanf("%d",&n);
	
	original=n;
	
	while(n!=0){
		rem=n%10;
		reverse=reverse*10+rem;
		n/=10;
	}
	if(original==reverse)
		printf("%d is palindrome.\n",original);
	else
		printf("%d is not palindrome.\n",original);
	
	//getch();
	return 0;
}
