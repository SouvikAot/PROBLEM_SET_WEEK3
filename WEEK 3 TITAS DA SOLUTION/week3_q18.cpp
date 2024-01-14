#include<stdio.h>
int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*\t");
		}
		for(int k=1;k<=4-i;k++)
		{
			printf("\t");
		}
		for(int j=4;j>i;j--)
		{
			printf("\t");
		}
		for(int k=1; k<=i;k++)
		{
			printf("*\t");
		}
		printf("\n");
		printf("\n");
	}
}
