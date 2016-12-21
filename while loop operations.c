/*Student Name=Sunil Giri
Subject=Programming Fundamentals
Roll No.=
Program=to find first number,last number,sum of digits,number of digits and sum of first and last digits of any number.
Lab No.=19
BCS Sem.=1st
Date=29 nov,2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){
	int n,rem,sum=0,b,count=0,reverse=0;

	printf("Enter any number:");
	scanf("%d",&n);
	b=n;
	//for(;n>0;)
	while(n>0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		sum+=rem;
		n/=10;
		count++;
	}
	printf("First digit of number %d=%d\n",b,rem);
	printf("last digit of number %d=%d\n",b,b%10);
	printf("Sum of digits of number %d=%d\n",b,sum);
	printf("Sum of first and last digit of number %d=%d\n",b,rem+b%10);
	printf("Total digit of number %d=%d\n",b,count);

    printf("Reverse of number %d = %d\n",b,reverse);

	if(reverse==b)
            printf("The number %d is palindrome.\n",b);
    else
            printf("The number %d is not palindrome.\n",b);
	//getch();
	return 0;
}
