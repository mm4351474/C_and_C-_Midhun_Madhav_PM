#include<stdio.h>
int main()
{
    int n=100,s=0,i=0;
    while(n<=200)
    {
        if(n%7==0)
        {
            i++;
            s=s+n;
            printf("%d is divisible by 7\n",n);
            n++;
        }
        else
        {
            n++;
        }
    }
    printf("The sum of all number that are divisible by 7 : %d\nThe total numbers that divisible by 7 : %d",s,i);
    return 0;
}
