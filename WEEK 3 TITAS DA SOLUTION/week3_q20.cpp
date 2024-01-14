#include<stdio.h>
int main()
{
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*\t");
		}
		int space= 7-(2*i);
		for(int j=1;j<=space;j++)
		{
			printf("\t");
		}
		for(int k=1;k<=i;k++)
		{
			printf("*\t");
		}
		printf("\n\n");
	}
	//for middle line 
	for(int i=1;i<=1;i++)
	{
		for(int j=1;j<=7;j++)
		printf("*\t");
	}
	printf("\n\n");
	///for lower portion
	for(int i=0;i<=2;i++)
	{
		for(int j=3;j>i;j--)
		{
			printf("*\t");
		}
		int space= 2*i+1;
		for(int j=1;j<=space;j++)
		{
			printf("\t");
		}
		for(int k=3;k>i;k--)
		{
			printf("*\t");
		}
		printf("\n\n");
	}

}
