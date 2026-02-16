#include<stdio.h>
int main()
{
     int a[100][100];
     int m,n,i,j,sd=0,o;
     printf("Enter the operation you wanna perform in matrix\n1.diagonal matrix\n2.upper triangle matrix\n3.lower triangle matrix\n\
4.sum of diagonal matrix elements\n5.sum of upper triangle matrix elements\n6.sum of lower triangle matrix elements\n\
======================ONLY ENTER THE OPERATION'S NUMBER (eg: diagonal is 1 so type 1)==============================\n");
     scanf("%d",&o);
     switch(o)
     {
      case 1:
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
     				}
     				else
     				{
     		 			printf("0 ");
     				}
     			}
			printf("\n");
                 }
                 break;
      case 2:
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
     				if(i<=j)
     				{
     					printf("%d ",a[i][j]);
     				}
     				else
     				{
     		 			printf("0 ");
     				}
     			}
			printf("\n");
                 }
                 break;
      case 3:
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
     				if(i>=j)
     				{
     					printf("%d ",a[i][j]);
     				}
     				else
     				{
     		 			printf("0 ");
     				}
     			}
			printf("\n");
                 }
                 break;
      case 4:
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
                 break;   
      case 5:
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
     				if(i<=j)
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
                 break;
      case 6:
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
     				if(i>=j)
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
                 break;                     
      default:
              printf("INVALID OPERATION 🥀️");
              break;
    }
    return 0;
}        
