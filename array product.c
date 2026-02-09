#include<stdio.h>
int main()
{
     int p=1,n,i=0,a[100];
     printf("enter the size of array : ");
     scanf("%d",&n);
     printf("enter the elements : ");
     while(i<n)
     {
          scanf("%d",&a[i]);
          printf("The elements at position %d: \n %d \n",i+1,a[i]);
          i++;
     }
     printf("The array elements are : ");
     i=0;
     while(i<n)
     {
         printf("%d ",a[i]);
         p = p * a[i];
         i++;
     }
     printf("\n The product is : %d",p);
     return 0;  
}
