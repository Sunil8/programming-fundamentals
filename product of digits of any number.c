/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to find product of digits of any number.
Lab No.=20
BCS Sem.=1st
Date=01 dec,2016
*/


#include<stdio.h>
//#include<conio.h>

int main(){
	int n,rem,product=1,a;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	a=n;
	
	while(n>0)
	{
		rem=n%10;
		product*=rem;
		n/=10;
	}
	printf("Product of digits of %d=%d\n",a,product);
	//getch();
	return 0;
}
