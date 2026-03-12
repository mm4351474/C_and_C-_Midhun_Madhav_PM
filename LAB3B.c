#include <stdio.h>
int main()
{
    float x, cos, term;
    int f = 2;
    printf("Enter x: ");
    scanf("%f", &x);
    cos = 1;
    term = 1;
    while(term >= 0.000001 || term <= -0.000001)
    {
        term = -term * x * x / (f * (f - 1));
        cos = cos + term;
        f = f + 2;
    }
    printf("cos(x) = %f", cos);
    return 0;
}
