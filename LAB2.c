#include <stdio.h>
float largest(float a, float b, float c)
{
    if(a > b)
    {
        if(a > c)
        {
            return a;
        }   
        else
        {
            return c;
        }    
    }
    else
    {
        if(b > c)
        {
            return b;
        }    
        else
        {
            return c;
        }    
    }
}
float smallest(float a, float b, float c)
{
    if(a < b && a < c)
    {
        return a;
    }
    else if(b < a && b < c)
    {
        return b;
    }    
    else
    {
        return c;
    }    
}
float average(float a, float b, float c)
{
    float avg;
    avg = (a + b + c) / 3;
    return avg;
}
int main()
{
    float q,w,e;
    float L,S,avg;
    int V;
    printf("Enter marks of three subjects separate them using commas (m1,m2,m3) : \n");
    scanf("%f,%f,%f", &q, &w, &e);
    L = largest(q,w,e);
    S = smallest(q,w,e);
    avg = average(q,w,e);
    V = (avg >= 50) ? 1 : 0;
    printf("Largest = %.2f\n", L);
    printf("Smallest = %.2f\n", S);
    printf("Average = %.2f\n", avg);
    printf("V = %d\n", V);
    return 0;
}
