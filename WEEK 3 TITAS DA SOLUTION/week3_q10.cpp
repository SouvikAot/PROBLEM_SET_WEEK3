#include<stdio.h>
int main()
{
	int count=9;
	for(int i=1;i<=4;i++)
	{
		for(int j=4;j>=i;j--)
		{
			printf("%d\t",count);
				count++;
		}
		count=count/2;
		printf("\n");
	
	}
}
