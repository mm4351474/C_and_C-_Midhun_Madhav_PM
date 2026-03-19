#include<stdio.h>
int main()
{
	int a[100],n,*p,sum;
	printf("enter the size of array : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("enter the element at %d : ",i+1);
		scanf("%d",&a[i]);
	}
	p = &a[0];
	for(int i=0;i<n;i++)
	{
		sum = sum + *p;
		p = p + 1; // scale factor 
		printf("address is %u",p);c // if you wanna see the scale factor and how its working
	}
	printf("sum is %d",sum);
	return 0;
}
