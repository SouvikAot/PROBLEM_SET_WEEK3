#include<stdio.h>
int main()
{
	int count=1;
	for(int i=0 ;i< 4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d\t",count);
			count++;
		}
		printf("\n");
	}
}
