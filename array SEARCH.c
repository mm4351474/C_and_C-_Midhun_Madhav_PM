#include<stdio.h>
int main()
{
     int n,i=0,a[100],search,count=0;
     printf("enter the size of array : ");
     scanf("%d",&n);
     printf("enter the elements : ");
     while(i<n)
     {
          scanf("%d",&a[i]);
          printf("The elements at position %d: \n %d \n",i+1,a[i]);
          i++;
     }
     printf("\nenter a the number to search : ");
     scanf("%d",&search);
     i=0;
     while(i<n)
     {
         if(a[i]==search)
         {
               count++;
               printf("The element is at position(%d)\n",i+1);
         }
         i++;
      }
     printf("The number repeating %d times",count);
     return 0;  
}
