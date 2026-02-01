#include <stdio.h>
int main()
{
    int n, i, mark;
    int gt80 = 0, gt60 = 0, gt40 = 0, le40 = 0;
    int r81_100 = 0, r61_80 = 0, r41_60 = 0, r0_40 = 0;
    printf("enter the no.of students: ");
    scanf("%d", &n);
    printf("Enter the marks of %d students:  ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &mark);
        if (mark > 80) 
        {
            gt80++;
            gt60++;
            gt40++;
            r81_100++;
        }
        else if (mark > 60) 
        {
            gt60++;
            gt40++;
            r61_80++;
        }
        else if (mark > 40) 
        {
            gt40++;
            r41_60++;
        }
        else 
        {
            le40++;
            r0_40++;
        }
    }
    printf("More than 80 marks: %d\n", gt80);
    printf("More than 60 marks: %d\n", gt60);
    printf("More than 40 marks: %d\n", gt40);
    printf("40 or less marks: %d\n", le40);
    printf("Marks 81 to 100: %d\n", r81_100);
    printf("Marks 61 to 80: %d\n", r61_80);
    printf("Marks 41 to 60: %d\n", r41_60);
    printf("Marks 0 to 40: %d\n", r0_40);
    return 0;
}
