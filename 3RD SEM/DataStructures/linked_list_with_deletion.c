#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

typedef struct Node node1;
node1 *newnode, *ptr, *prev, *temp;
node1 *first = NULL, *last = NULL;



node1* create_node(int val){
	newnode=(node1*)malloc(sizeof(node1));
	if(newnode==NULL){
	printf("Data Not Inserted");
	return 0;
	}
	else{
		newnode->data=val;
		newnode->next=NULL;
		return newnode;
	}
}



void inserting_at_first(){
	int val;
	printf("\n Enter Value to be inserted at first");
	scanf("%d",&val);
	newnode=create_node(val);
	if(first==last && first==NULL){
		first=last=newnode;
		first->next=NULL;
		last->next=NULL;
	}
	else{
		
        temp = first;
        first = newnode;
        first->next = temp;
    }


}


void delete_pos()
{
    int pos, cnt = 0, i,op;
 
    if (first == NULL)
    {
        
        printf(":No node to delete\n");
    }
    else
    {
        printf("\nEnter the position of value to be deleted:\n");
        printf("\n1.First\n");
        printf("\n2.At any Position\n");
        printf("\n3.Last\n");
        scanf(" %d", &op);
        
        ptr = first;
        
        if (op == 1)
        {
            first = ptr->next;
            printf("\nElement deleted");    
        }
        

        else 
        {
            
            while (ptr != NULL)
            {
                ptr = ptr->next;
                cnt = cnt + 1;
            }
            if(op==3)
                pos=cnt;
            if(op==2){
            printf("enter Position of element to be deleted\n");
            scanf("%d",&pos);}
            if (pos > 0 && pos <= cnt)    
            {
                ptr = first;
                for (i = 1;i < pos;i++)
                {
                    prev = ptr;
                    ptr = ptr->next;
                }
                prev->next = ptr->next;
            }
            else
            {
                printf("Position is out of range");
            }
        free(ptr);
        printf("\nElement deleted");
        }
    }
}


void display()
{
    if (first == NULL)
    {
        
        printf(":No nodes in the list to display\n");
    }
    else
    {
        for (ptr = first;ptr != NULL;ptr = ptr->next)
        {    
            printf("%d\t", ptr->data);
        }
    }
}


int main(){

	int ch;
    char ans = 'Y';
 
    while (ans == 'Y'||ans == 'y')
    {
        printf("\n1.Insert node at first");
        printf("\n2.Display");
        printf("\n3.Delete node");
        printf("\nEnter your choice");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1: 
            printf("\nInserting node at first\n");
            inserting_at_first();
            break;
	      case 2: 
            printf("\nDisplay\n");
            display();
            break;
        case 3: 
            printf("\nDelete Element\n");
            delete_pos();
            break;
	default: 
            printf("\nInvalid Choice:\n");
            break;
        }
        printf("\nYOU WANT TO CONTINUE (Y/N)");
        scanf(" %c", &ans);
	}
return 0;
}


