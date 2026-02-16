#include<stdio.h>
int main()
{
     int a[100][100];
     int m,n,i,j,sd=0;
     printf("enter no.of rows & columns in matrix A (eg:row,column): ");
     scanf("%d,%d",&m,&n);
     for(i=0;i<m;i++)
     {
     	for(j=0;j<n;j++)
     	{
     		printf("enter element in %d,%dth item in matrix A: ",i+1,j+1); 
     		scanf("%d",&a[i][j]);
     	}
     }
     for(i=0;i<m;i++)
     {
     	for(j=0;j<n;j++)
     	{
     		if(i==j)
     		{
     			printf("%d ",a[i][j]);
     			sd= sd + a[i][j];
     		}
     		else
     		{
     		 	printf("0 ");
     		}
     	}
	printf("\n");
     }
     printf("\nsum is %d",sd);
     return 0;
}
     	
      	   			 	     		
               
