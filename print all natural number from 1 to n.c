/*Student Name=Sunil Giri
Subject=Programming Fundamentals
Roll No.=
Program=to print all natural numbers from 1 to n numbers.
Lab No.=20
BCS Sem.=1st
Date=01 dec,2016
*/


#include<stdio.h>
//#include<conio.h>

int main(){
	int n,i=1;

	printf("Enter any number:");
	scanf("%d",&n);
	printf("All natural number from 1 to %d:\n",n);
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}

	//getch();
	return 0;
}
