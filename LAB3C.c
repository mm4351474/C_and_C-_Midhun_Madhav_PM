#include <stdio.h>
int main()
{
    float sum, term;
    int n = 1, i, power;
    sum = 0;
    term = 1;
    while(term >= 0.000001)
    {
        power = 1;
        for(i = 1; i <= n; i++)
        {
            power = power * n;
        }
        term = 1.0 / power;
        sum = sum + term;
        n = n + 1;
    }
    printf("SUM = %f", sum);
    return 0;
}
