#include<stdio.h>
int main()
{
     int a[100];
     int n,i,s,h,l,c;
     printf("enter size: ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          printf("Enter element (%d) to array : ",i);
          scanf("%d",&a[i]);
     }
     printf("enter a number to search : ");
     scanf("%d",&s);
     h=n-1;
     l=0;
     c=(h+l)/2;
     while(s!=a[c])
     {
     	  printf("h : %d\n l : %d\n c : %d\n",h,l,c);
     	  if(h-l==1)
     	  {
     	  	printf("No element in array.....!\n");
                c = -1;
     	  	break;
     	  }		
          if(s<a[c])
          {
          	h=c;
          	c=(h+l)/2;
          }
          else if(s>a[c])
          {
          	l=c;
          	c=(h+l)/2;
          }
      }
      if(c!=-1)
      { 
      		printf("Item found at %d\n",c);
      }
      return 0;
}
          		
         
          
          
