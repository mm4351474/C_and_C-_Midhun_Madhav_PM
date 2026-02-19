#include <stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char l[100];
	printf("enter elements to array A: ");
	scanf("%[^\n]s",a);
	strcpy(l,a);
	printf("The sring is : %s",l);
	return 0;
}
