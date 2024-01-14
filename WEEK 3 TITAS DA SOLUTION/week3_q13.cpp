
#include<stdio.h>
int main()
{
	int count=1;

	for(int i=1;i<=4;i++)
	{
	    for(int l=1;l<i;l++)
		{
			printf("\t");
		}
		for(int j=4; j>=i;j--)
		{
			printf(" %d\t",count);
			count++;
		}
		for(int k=3;k>=i;k--)
		{
			printf(" %d\t",count);
			count++;
		}
		
		
		printf("\n");
	}
}
