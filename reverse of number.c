/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to print reverse of any digit number.
Lab No.=17
BCS Sem.=1st
Date=24 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
	int n,rem,sum=0;
	
	printf("Enter any digit number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n/=10;
	}
		printf("Reverse is %d",sum);
	
	//getch();
	return 0;
}
