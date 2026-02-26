 #include <stdio.h>
 void sub(int[100][100],int[100][100],int,int);
 int main()
 {
     int a[100][100];
     int b[100][100];
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
     sub(a,b,m,n);
     return 0;
 }
 void sub(int a[100][100],int b[100][100],int x,int y)
 {
        int r[100][100];
 	int i,j,m,n;
 	for(i=0;i<x;i++)
        {
     		for(j=0;j<y;j++)
     		{
     			r[i][j] = a[i][j] - b[i][j];
     			printf("%d",r[i][j]);
     		}
     		printf("\n");
     	}
 }
     	
     		
