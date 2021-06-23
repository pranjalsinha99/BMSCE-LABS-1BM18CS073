#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;

void Insert(int num,int n)
{
    int i;
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
    temp1->data = num;
    temp1->next = NULL;
    if(n==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    struct Node* temp2 =head;
    for(i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
void Print()
{
    struct Node* temp=head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    int item;
    int pos,option;
    head=NULL;
    while(1)
    {
        printf("Welcome:\n");
        printf("1:Insert\n2:Display\n3:Exit");
        scanf("%d",&option);
        if(option==1)
        {
            printf("\nEnter Data & position\n");
            scanf("%d%d",&item,&pos);
            Insert(item,pos);
        }
        else if(option==2)
        {
            printf("\nLinked List: \n ");
            Print();
            printf("\n");
        }
        else
        {
            printf("\Exiting");
            exit(0);
        }
    }
    return 0;
}
