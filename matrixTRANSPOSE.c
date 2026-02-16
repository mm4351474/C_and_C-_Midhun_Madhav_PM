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
               printf("Enter the element in matrix ([%d][%d])th item: ",i+1,j+1);
               scanf("%d",&a[i][j]);
          }
     }
     printf("\n");
     for(i=0;i<n;i++)
     {
          for(j=0;j<m;j++)
          {
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }
     for(i=0;i<m;i++)     // transpose process starts
     {
          for(j=0;j<n;j++)
          {
               printf("%d ",a[j][i]);
          }
          printf("\n");
     }    
     return 0;
}
               
