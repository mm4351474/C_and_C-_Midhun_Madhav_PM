 #include <stdio.h>
 void sum(int x)
 {
 	int n,s=0,q;
 	while(x>0)
 	{
 		q = x%10;
 		s = s + q;
 		x = x/10;
 	}
 	printf("the sum of digits is : %d\n",s);
 }
 void reverse(int y)
 {
 	int rev=0,rem=0;
 	while(y>0)
 	{
 		rem = y%10;
 		rev = rev*10+rem;
 		y = y/10;
 	}
 	printf("the reverse is : %d\n",rev);
 }
 int main()
 {
 	int a;
 	printf("enter a number to find sum and its reverse : ");
 	scanf("%d",&a);
 	sum(a);
 	reverse(a);
 	return 0;
 }
