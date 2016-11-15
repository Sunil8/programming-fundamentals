/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=to print name address,age,gender 5 times using for loop input from user.
Lab No.=14
BCS Sem.=1st
Date=15 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int d,i;
	char a[20],b[20],c[8];
	
	printf("Enter Your name:");
	gets(a);
	printf("Enter your address:");
	gets(b);
	printf("Enter your gender:");
	gets(c);
	printf("Enter your age:");
	scanf("%d",&d);
	
	for(i=0;i<5;i++)
	{	//printf("Your name is %s.\n",getchar(a));
		//printf("Your Address is %s.\n",getchar(b));
		//printf("Your Gender is %s.\n",getchar(c));
		puts(a);
		puts(b);
		puts(c);
		printf("Your Age is %d.\n",d);
	}
	//getch();
	return 0;
}
