#include <stdio.h>
#include <ctype.h>
int main()
{
	char string[20];
	int n=0,i=0,good=0;
	
	do{
		printf("Enter the string:");
		scanf("%s",string);
		good=1;
		for(i=0;string[i]!='\0';i++)
		{
			if(isupper(string[i]))
			{
				good=0;
				break;
			}
		}

	}while(!good);
	printf("Good string");
}
