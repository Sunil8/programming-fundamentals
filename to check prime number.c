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
	int n,count=0,i,a;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	a=n;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0){
		count++;
		printf("%d\n",i);}
	}
	
	if(count==2){
		printf("%d is  prime number.\n",a);}
	else {
		printf("%d is not prime number.",a);}
	
	//getch();
	return 0;
}
	
