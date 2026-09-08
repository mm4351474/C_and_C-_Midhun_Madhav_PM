#include<iostream>

class linkdlist
{
private :
    struct node
    {
        int data;
        node *link;
    }
    *start, *newnode, *temp;
public :
    linkdlist();
    void insert();
    void display();
};

linkdlist::linkdlist()
{
    start = NULL;
}

void linkdlist::insert()
{
    int num;
    char ch = 'y';
    do
    {
        std::cout<<"enter the number : ";
        std::cin>>num;
        newnode = new node;
        newnode->data=num;
        newnode->link=NULL;
        if(start==NULL)
        {
            start = temp = newnode;
        }
        else
        {
            temp->link=newnode;
            temp=newnode;
        }
        std::cout<<"do you want to continue (y/n) : ";
        std::cin>>ch;
    }
    while(ch=='y');
} 
void linkdlist::display()
{
    temp = start;
    if(start == NULL)
    {
        std::cout<<"linked list is empty!!!!!!!!!!!!!!!";
    }
    else
    {
        while(temp->link!=NULL)
        {
            std::cout<<temp->data<<"\n";
            temp=temp->link;
        }
    }
}

int main()
{
    linkdlist obj;
 //   obj.display();
    obj.insert();
    obj.display();
    obj.insert();
    obj.display();
    getchar();
    return 0;
}
