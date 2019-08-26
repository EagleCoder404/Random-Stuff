#include <stdio.h>

int main()
{
	int i,n,num=1,j;
	printf("Enter row:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<(i+1);j++)
			printf("%d ",num++);
		printf("\n");
	}

}