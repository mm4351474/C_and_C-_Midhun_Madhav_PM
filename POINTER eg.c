#include<stdio.h>
int main()
{
	int z,y,a,b,*p1,*p2;
	a=10;
	b=20;
	p1=&a;
	p2=&b;
	y = *p1 * *p2;
	int sum=0;
	sum = sum + *p1;
	*p2 = *p2 + 10;
	z = 5* - *p2/ *p1;
	printf("%u\n",p1 + 4);
	printf("%u\n",p2 - 2);
	printf("%u\n",p1 - p2);
	printf("y = %d\n",y);
	printf("sum is %d\n",sum);
	printf("value pointed by p2 is %d\n",*p2);
	printf("z = %d",z);
	return 0;
}
