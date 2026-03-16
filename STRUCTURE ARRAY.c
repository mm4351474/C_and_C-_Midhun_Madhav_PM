#include<stdio.h>
struct student
{
    float weight;
    float height;
};
int main()
{
    struct student s[100];
    int n,i;
    printf("enter the number of students : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the weight of students %d : ",i+1);
        scanf("%f",&s[i].weight);
        printf("Enter the height of students %d : ",i+1);
        scanf("%f",&s[i].height);
    }
    for(i=0;i<n;i++)
    {
        printf("the weight of students %d : %f\n",i+1,s[i].weight);
        printf("the height of students %d : %f\n",i+1,s[i].height);
    }
    return 0;
}
