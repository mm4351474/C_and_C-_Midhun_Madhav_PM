#include<stdio.h>
int fact(int);
int main()
{
	int n,a=0,b=1,i=0,c;
	printf("enter a number to get fibonacci series: ");
	scanf("%d",&n);
	printf("%d \n",a);
	printf("%d \n",b);
	while(i<=n)
	{
		c = a + b;
		a=b;
		b=c;
		printf("%d \n",c)
		i++;
	}
	return 0;
}
