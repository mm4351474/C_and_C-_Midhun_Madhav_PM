#include <stdio.h>
int main() 
{
    double a,b,c,d,m,n,x1,x2,x0;
    printf("Enter a,b,c,d,m,n, the number should be separated using comma(eg:11,23....):");
    scanf("%lf,%lf,%lf,%lf,%lf,%lf",&a,&b,&c,&d,&m,&n);
    x0 = ((a*d)-(c*b));
    if(x0!=0)
    {
       x1 = (((m*d)-(b*n))/x0);
       x2 = (((n*a)-(m*c))/x0);
       printf("The solution of eqn.1, x1 = %lf",x1);
       printf("The solution of eqn.2, x2 = %lf",x2);
    }
    else
    {
        printf("ad - cb = 0, since it is 0 there is no solution");
    }
    return 0;
}
