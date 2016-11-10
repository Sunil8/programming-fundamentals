/*Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=menu based c program using switch case.
Lab No.=13
BCS Sem.=1st
Date=10 nov,2016
*/

#include<stdio.h>
//#include<conio.h>


int main(){
	int a,b,c,i,count=0;
	char d,e;
	
	printf("*************************************\n");
	printf("**                                 **\n");
	printf("**        Enter any no:            **\n");
	printf("**     1. Check ODD/Even.          **\n");
	printf("**     2. Check Primenumber/not.   **\n");
	printf("**     3. Check vowel/consonant.   **\n");
	printf("**     4. Find ASCII value.        **\n");
	printf("**                                 **\n");
	printf("*************************************\n");
	
	printf("Enter any number:\n");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("1. Check ODD/Even:\n");
			printf("Enter any number:\n");
			scanf("%d",&b);
			(b%2==0)?printf("%d is even number.\n",b):printf("%d is odd number.\n",b);
			break;
		
		case 2:
			printf("2. Check Prime number or not:\n");
			printf("Enter any number:\n");
			scanf("%d",&c);
			for(i=1;i<=c;i++)
			{
				if(c%i==0)
					count++;
			}
			if(count>2)
					printf("%d is not prime number.\n",c);
			else
					printf("%d is prime number.\n",c);
			break;
		
		case 3:
			printf("3. Check vowel or consonant:\n");
			printf("Enter any character:\n");
			scanf("%s",&d);
			
			(d=='a'||d=='e'||d=='i'||d=='o'||d=='u'||d=='A'||d=='E'||d=='I'||d=='O'||d=='U')?printf("%c is vowel.\n",d):printf("%c is consonant.\n",d);
			break;
		case 4:
			printf("4. Find ASCII value.\n");
			printf("Enter any character:\n");
			scanf("%s",&e);
			
			printf("The ASCII value of %c=%d\n",e,e);
			break;
		default:
            printf("Error! Invalid program.");
}
			
		
	//getch();
	return 0;
}
