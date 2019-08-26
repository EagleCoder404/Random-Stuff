#include <stdio.h>
#include <ctype.h>

int main()
{
	char string[20];
	int n=0,i=0;

	printf("Enter the alphanumeric string\n");
	scanf("%s",string);

	while(string[i]!='\0')
	{
		if(isdigit(string[i]))
			n++;
		i++;
	}
	printf("\n%d",n);
}