#include <stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int l;
	printf("enter elements to array A: ");
	scanf("%[^\n]s",a);
	l = strlen(a);
	printf("The length of the sring is : %d",l);
	return 0;
}
