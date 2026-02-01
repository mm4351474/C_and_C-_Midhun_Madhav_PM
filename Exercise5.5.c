#include <stdio.h>
int main() 
{
    int m, p, c, t;
    printf("Enter the Marks in Maths,Physics,Chemistry\n(use commas to separate marks(eg:35,67,45)) : ");
    scanf("%d,%d,%d", &m, &p, &c);
    t = m + p + c;
    if ( (m >= 60 && p >= 50 && c >= 40 && t >= 200) || (m + p >= 150) )
        {
          printf("Eligible for admission\n");
        }
    else 
        {
        printf("Not eligible for admission\n");
        }
    return 0;
}
