
#include<stdio.h>
int main()
{

	for(int i=1;i<=4;i++)
	{
	    for(int l=1;l<i;l++)
		{
			printf("\t");
		}
		for(int j=4; j>=i;j--)
		{
			printf(" *\t");
		
		}
		for(int k=3;k>=i;k--)
		{
			printf(" *\t");
			
		}
			printf("\n\n");
	}
}
