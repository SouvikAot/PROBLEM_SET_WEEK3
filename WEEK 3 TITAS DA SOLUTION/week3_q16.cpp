#include<stdio.h>
int main()
{
	for(int i=1; i<=4;i++)
	{
		for(int j=3; j>=i;j--)
		{
			printf("\t");
		}
		for(int k=1;k<=i;k++)
		{
			printf("*\t");
		}
		printf("\n\n");
	}
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("\t");
		}
		for(int k=3;k>=i;k--)
		{
			printf("*\t");
		}
		printf("\n\n");
	}
}
