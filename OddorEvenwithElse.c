#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("THE GIVEN NUMBER IS EVEN");
    }
    else
    {
        printf("THE GIVEN NUMBER IS ODD");
    }
    return 0;
}
