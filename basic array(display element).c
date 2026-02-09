#include<stdio.h>
int main()
{
     int n,i=0,a[100];
     printf("enter the size of array : ");
     scanf("%d",&n);
     printf("enter the elements : ");
     while(i<n)
     {
          scanf("%d",&a[i]);
          printf("The elements at position %d: \n %d \n",i+1,a[i]);
          i++;
     }
   return 0;  
}
