/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to print reminder of the number assigned by user.
Lab No.=17
BCS Sem.=1st
Date=24 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
	int n,rem;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	rem=n%10;
	printf("Reminder is %d\n",rem);
	
	//getch();
	return 0;
}
	
