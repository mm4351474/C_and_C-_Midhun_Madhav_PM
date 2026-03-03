#include<stdio.h>
int fact(int);
int main()
{
	int n,i=1,f=1;
	printf("enter a number to find factorial: ");
	scanf("%d",&n);
	f = fact(n);
	printf("the factorial of %d is %d : ",n,f);
	return 0;
}
int fact(int num)
{
	int f;
	if(num==1)
	{
		return 1;
	}
	else
	{
		f = num * fact(num-1);
	}
	return f;
}
