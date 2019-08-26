#include <stdio.h>

int main()
{
	int a[10],b[10],ans[10]={0};
	int n1,n2,i,j;

	printf("Enter size of first array:");
	scanf("%d",&n1);
	printf("Enter first array\n");
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);

	printf("Enter size of Second array:");
	scanf("%d",&n2);
	printf("Enter Second array\n");
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);

	
	for(i=0;i<n1;i++)
		for(j=0;j<n2;j++)
			if(a[i]>=a[j])
				ans[i]+=1;


	printf("The answer is\n");
	for(i=0;i<n1;i++)
		printf("%d ",ans[i]);


}