#include<stdio.h>
int main()
{
     int a[100];
     int n,i,j,temp;
     printf("enter size: ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          printf("Enter element (%d) to array : ",i);
          scanf("%d",&a[i]);
     }
     for(i = 0; i < n - 1; i++)
     {
          for(j = 0; j < n - 1 - i; j++)
          {
               if(a[j] > a[j + 1])
               {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
               }
          }
     }

     printf("Sorted array:\n");
     for(i = 0; i < n; i++)
     {
          printf("%d ", a[i]);
     }

     return 0;
}
