#include <stdio.h>
int main()
{
	char a[100];
	char b[100];
	int i;
	printf("enter elements to array A: ");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	for(i=0;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}   // copying of string array
