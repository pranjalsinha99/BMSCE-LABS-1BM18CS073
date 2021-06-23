#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void Enqueue(int queue[MAX],int *f,int *r)
{
 int element;
 printf("Please enter an element to be inserted \n");
 scanf("%d",&element);
 if(*r==(MAX-1))
  printf("Queue is Overflow\n");
 else if(*r==-1 && *f==-1)
 {
  *f=*r=0;
  queue[*r]=element;
  printf("Element Inserted! \n");
}
 else 
 {
  *r=*r+1;
  queue[*r]=element;
  printf("Element Inserted! \n");
 }

}

void Dequeue(int queue[MAX],int *f,int *r)
{
 int elem;
 if(*f==-1 || *f>=*r)
    printf("Queue is Underflow! \n");
 else
  {
   elem=queue[*f];
   printf("Element %d deleted \n",elem);
   *f=*f+1;
  }
}

void top_element(int queue[MAX], int *f)
 {
  printf("%d is the top element \n",queue[*f]);
 }

void display(int queue[MAX],int *f,int *r)
 {
  int i;
   printf("Queue:");

  for(i=*f;i<=*r;i=i+1)
   {
   printf("%d || ",queue[i]);
   }
   printf("\n");
 }

int main()
{
 int rear=-1,front=-1,Queue[MAX],n;
 do
 {
  printf("Please Enter Your Choice \n");
  printf("1.Enqueue \n");
  printf("2.Dequeue \n");
  printf("3.Display \n");
  printf("4.Top Element of Queue \n");
  printf("5.Exit \n");
  scanf("%d",&n);
  switch(n)
  {
   case 1:
   {
    Enqueue(Queue,&front,&rear);
    break;
   }
   case 2:
   {
     Dequeue(Queue,&front,&rear);
     break;
   }
   case 3:
   {
    display(Queue,&front,&rear);
    break;
   }
   case 4:
   {
    top_element(Queue,&front);
    break;
   }
   case 5:
   {
    exit(0);
    break;
   }
   default :printf("Invalid Input! Please Try again \n");
 }
}while(n>-1);
 
 return 0;
}  
