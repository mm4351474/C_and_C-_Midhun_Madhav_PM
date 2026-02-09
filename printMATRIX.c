#include<stdio.h>
int main()
{
     int a[100][100];
     int n,m,i=0,j=0;
     printf("Enter number of rows in matrix : ");
     scanf("%d",&n);
     printf("Enter number of columns in matrix : ");
     scanf("%d",&m);
     for(i=0;i<n;i++)
     {
          for(j=0;j<m;j++)
          {
               printf("Enter the elemnts in matrix : ");
               scanf("%d",&a[i][j]);
          }
     }
     i=0;
     j=0;
     for(i=0;i<n;i++)
     {
          for(j=0;j<n;j++)
          {
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }     
     return 0;
}
               
