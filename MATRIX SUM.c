#include<stdio.h>
int main()
{
     int a[100][100];
     int b[100][100];
     int R[100][100];
     int m,n,p,q,i,j,s,t;
     printf("enter no.of rows & columns in matrix A (eg:row,column): ");
     scanf("%d,%d",&m,&n);
     printf("enter no.of rows & columns in matrix B (eg:row,column): ");
     scanf("%d,%d",&s,&t);
     if((m!=s)||(n!=t))
     {
     	printf("this will not work you have to study matrix first!!!!!");
     	return 0;
     }
     for(i=0;i<m;i++)
     {
     	for(j=0;j<n;j++)
     	{
     		printf("enter element in %d,%dth item in matrix A: ",i+1,j+1); 
     		scanf("%d",&a[i][j]);
     	}
     }
     for(p=0;p<s;p++)
     {
     	for(q=0;q<t;q++)
     	{
     		printf("enter element in %d,%dth item in matrix B: ",p+1,q+1); 
     		scanf("%d",&b[p][q]);
     	}
     }
     for(i=0;i<m;i++)
     {
     	for(j=0;j<n;j++)
     	{
     		R[i][j] = a[i][j]+b[i][j];
     		printf("%d ",R[i][j]); 
     	}
	printf("\n");
     }
     return 0;
}
     	
      	   			 	     		
               
