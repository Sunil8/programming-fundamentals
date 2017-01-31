/*
Student Name=Sunil Giri
Subject=Programming Fundamentals 
Roll No.=
Program=
Lab No.=35
BCS Sem.=1st
Date=jan 30,2017
*/

#include<stdio.h>

int main()
{
	int arr[100],i,temp[100],j,c,co;
	for(i=0;i<10;i++)
	{
		printf("Enter %d element of array:",i);
		scanf("%d",&arr[i]);
	}
	
	/*for(i=0;i<10;i++)
	{
		printf("%d element of array:%d\n",i,arr[i]);
	}*/
	
	for(j=0;j<10;j++)
	{
		c=0;
		co=0;
	for(i=0;i<10;i++)
	{
		
		if(arr[j]>=arr[i])
		{
			c++;
			if(arr[j]==arr[i])
			{
				co++;
			}
		}
			
	}
	for(i=1;i<co;i++)
	{
		temp[c-1-i]=arr[j];
	}
	if(c==0)
	{
		temp[c]=arr[i];
	}
	else
	{
		temp[c-1]=arr[j];
	}
	}
	printf("Elements of array in ascending order:\n");
	for(i=0;i<10;i++)
	{
		printf("%d  ",temp[i]);
	}
	return 0;
}
