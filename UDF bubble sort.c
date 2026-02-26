 #include <stdio.h>
 void sort(int[],int);
 int main()
 {
     int a[100];
     int n;
     printf("enter the size of array : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          printf("The elements at position %d:",i+1);
          scanf("%d",&a[i]);
     }
     sort(a,n);
     return 0;
 } 	
 void sort(int x[],int n)
 {
 	int i,j,temp;
 	for(i=0;i<n-1;i++)
 	{
 		for(j=0;j<n-1-i;j++)
 		{
 			if(x[j]>x[j+1])
 			{
 				temp = x[j];
 				x[j] = x[j+1];
 				x[j+1] = temp;
 			}
 		}
 	}
 	printf("sorted array is :\n");
 	for(i=0;i<n;i++)
 	{
 		printf("%d ",x[i]);
 	}
 }			
