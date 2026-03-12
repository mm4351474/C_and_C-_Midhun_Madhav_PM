#include<stdio.h>
int rowfunction(int rows, int columns,int row, int a[rows][columns])
{
    int minimum,i=0;
    minimum = a[row][i];
    for(i=1;i<columns;i++)
    {
        if(a[row][i]<minimum)
        {
            minimum = a[row][i];
        }
    }
    return minimum;
}   
int columnfunction(int rows, int columns,int column, int a[rows][columns])
{
    int maximum,i=0;
    maximum = a[i][column];
    for(i=1;i<rows;i++)
    {
        if(a[i][column]>maximum)
        {
            maximum = a[i][column];
        }
    }
    return maximum;
}
int secondlargest(int rows,int columns,int a[rows][columns])
{
    int i,j;
    int largest=a[0][0];
    int second=a[0][0];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(a[i][j]>largest)
            {
                second=largest;
                largest=a[i][j];
            }
            else if(a[i][j]>second && a[i][j]!=largest)
            {
                second=a[i][j];
            }
        }
    }
    return second;
}
int main()
{
     int m,n,i,j,min,max,s=0;
     printf("enter no.of rows & columns in matrix A (eg:row,column): ");
     scanf("%d,%d",&m,&n);
     int a[m][n];
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
                 min = rowfunction(m,n,i,a);
                 max = columnfunction(m,n,j,a);

                 if(a[i][j] == min && a[i][j] == max)
                 {
                     printf("At %d,%d = %d \n",i,j,a[i][j]);
                     s++;
                 }
             }     
     }
     printf("s = %d \n",s);
     printf(" S shows the no.of saddle points in the matrix \n");
     int sec = secondlargest(m,n,a);
     printf("Second largest element = %d",sec);
}
