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



void inserting_at_end()
{
    int val;
 
    printf("\nEnter the value to be inserted at the end:");    
    scanf("%d", &val);
    newnode = create_node(val);
    if (first == last && last == NULL)
    {
        first = last = newnode;
        first->next = NULL;
        last->next = NULL;
    }
    else
    {
        last->next = newnode;
        last = newnode;
        last->next = NULL;
    }
 
}  

void inserting_at_position(){
    int pos, val, cnt = 0, i;
 
    printf("\nEnter the value for the Node:");
    scanf("%d", &val);
    newnode = create_node(val);
     printf("\nEnter the position ");
    scanf("%d", &pos);
    ptr = first;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        cnt++;
    }
    if (pos == 1)
    {
        if (first == last && first == NULL)
        {
            first = last = newnode;
            first->next = NULL;
            last->next = NULL;
        }
        else
        {
            temp = first;
            first = newnode;
            first->next = temp;
        }
        printf("\nInserted");
    }
    else if (pos>1 && pos<=cnt)
    {
        ptr = first;
        for (i = 1;i < pos;i++)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = newnode;
        newnode->next = ptr;
        printf("\nINSERTED");
    }
else{
	printf("Invalid Position\n");
}
}


void sort_list_ascending(){
	 node1 *nxt;
    int t;
 
    if (first == NULL)
    {
        printf("No elements to sort\n");
    }
    else
    {
        for (ptr = first;ptr != NULL;ptr = ptr->next)
        {
            for (nxt = ptr->next;nxt != NULL;nxt = nxt->next)
            {
                if (ptr->data > nxt->data)
                {    
                    t = ptr->data;
                    ptr->data = nxt->data;
                    nxt->data = t;
                }
            }
        }
        printf("\nSorted List:");
        for (ptr = first;ptr != NULL;ptr = ptr->next)
        {
            printf("%d\t", ptr->data);
        }
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
        if(op==3)
          ptr=last;
        if (op == 1)
        {
            first = ptr->next;
            printf("\nElement deleted");    
        }
        

        else 
        {
            printf("enter Position of element to be deleted\n");
            scanf("%d",&pos);
            while (ptr != NULL)
            {
                ptr = ptr->next;
                cnt = cnt + 1;
            }
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
        printf("\n2.Insert node at last");
        printf("\n3.Insert node at position");
        printf("\n4.Sorted Linked List in Ascending Order");
        printf("\n5.Display");
        printf("\n6.Delete node");
        printf("\nEnter your choice");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1: 
            printf("\nInserting node at first\n");
            inserting_at_first();
            break;
        case 2: 
            printf("\nInserting node at last\n");
            inserting_at_end();
            break;
        case 3: 
            printf("\nInserting node at position\n");
            inserting_at_position();
            break;
        case 4: 
            printf("\nSorted Linked List in Ascending Order\n");
            sort_list_ascending();
            break;
	      case 5: 
            printf("\nDisplay\n");
            display();
            break;
        case 6: 
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


