#include<stdio.h>
int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n\n");
	}
	for(int k=1;k<=3;k++)
	{
		for(int l=3;l>=k;l--)
		{
			printf("*\t");
		}
		printf("\n\n");
	}
}
