/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to count digits of number.
Lab No.=19
BCS Sem.=1st
Date=29 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n,c=0;
	
	printf("Enter any number:");
	scanf("%d",&n);

	while(n>0)
	{
		n/=10;
		c++;
	}
	
	printf("Total digits=%d",c);
	
	//getch();
	return 0;
}
