#include<stdio.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>i;j--)
		{
			printf("\t");
		}
		for(int k=1;k<=i;k++)
		{
			printf("*\t");
		}
		for(int l=1;l<i;l++)
		{
			printf("*\t");
		}
		printf("\n\n");
	}
	for(int i=1;i<=4;i++)
	{
	    for(int l=1;l<=i;l++)
		{
			printf("\t");
		}
		for(int j=4; j>=i;j--)
		{
			printf("*\t");
		
		}
		for(int k=3;k>=i;k--)
		{
			printf("*\t");
			
		}
			printf("\n\n");
	}
}
