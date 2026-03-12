#include <stdio.h>
int main()
{
    float x, sin, term;
    int f = 1;
    printf("Enter x: ");
    scanf("%f", &x);
    sin = x;
    term = x;
    while(term >= 0.000001 || term <= -0.000001)
    {
        f = f + 2;
        term = -term * x * x / (f * (f - 1));
        sin = sin + term;
    }
    printf("sin(x) = %f", sin);
    return 0;
}
