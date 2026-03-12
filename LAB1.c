#include<stdio.h>
#include<math.h>
#define pi 3.14159
float diameter(float a,float b,float c,float d)
{
    float D;
    D = (float)sqrt(((c - a)*(c - a))+((d - b)*(d - b)));
    return (D);
}
float area(float r)
{
    float A;
    A = pi*r*r;
    return (A);
}
float perimeter(float r)
{
    float P;
    P = 2*pi*r;
    return(P);
}
int main()
{
    float x1,x2,y1,y2;
    float d,r,a,p;
    printf("Enter the coordinates (x1,y1)&(x2,y2)\n");
    printf("x1 : ");
    scanf("%f",&x1);
    printf("y1 : ");
    scanf("%f",&y1);
    printf("x2 : ");
    scanf("%f",&x2);
    printf("y2 : ");
    scanf("%f",&y2);
    d = diameter(x1,y1,x2,y2);
    r = d/2;
    a = area(r);
    p = perimeter(r);
    printf("Area = %f\nPerimeter = %f\nDiameter = %f\nRadius = %f",a,p,d,r);
    return 0;
}
