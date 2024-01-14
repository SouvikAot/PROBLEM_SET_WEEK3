#include<stdio.h>
int main()
{
	int count=10;
	for(int i=1;i<=4;i++)
	{
		for(int j=4;j>=i;j--)
		{
			printf("%d\t",count);
				count--;
		}
		printf("\n");
	
	}
}
