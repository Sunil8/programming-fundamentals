/*
Name: Sunil giri
Subject: Programming fundamentals.
Program:to print pascals triangle.
Roll no.:
Bcs Sem:1st
Date:jan 12 2017
*/

#include<stdio.h>
int factorial(int a);

int main()
{
    int z,n,i,fact,j;

    printf("Enter number of terms to print pascal triangle:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        fact=1;
        for(z=0;z<=n-i;z++)
        {
            printf("   ");
        }
        for(j=0;j<=i;j++)
        {
           fact=(factorial(i)/(factorial(j)*factorial((i-j))));
           printf("%d     ",fact);
        }
        printf("\n\n");
    }

}
int factorial(int a)
{
    int fact1=1,i;
    for(i=a;i>=1;i--)
    {
        fact1*=i;
    }
    return (fact1);
}
