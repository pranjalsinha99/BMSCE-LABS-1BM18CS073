#include <stdio.h>
#include <stdbool.h>
int item[4];
int top=-1;

bool Isfull()
{
	if(top==4)
		return true;
	else
		return false;
}
bool Isempty()
{
	if(top==-1)
		return true;
	else
		return false;
}
void push(int x)
{
	if(Isfull())
		printf("Stack is full:\n");
	else{
		top=top+1;
		item[top]=x;
	}
}
void pop()
{
	if(Isempty())
	printf("Stack is empty:\n");
	else
	top=top-1;
}
int top2()
{
	return item[top];
}

void print()
{
	int i=0;
	printf("Stack: \n");
	for(i=0;i<4;i++)
	{
		printf("%d\n",item[i]);
	}
}
 void main()
{
	push(20); 
	push(30);
	push(50);
	pop();
 	push(100);
	push(1);
	push(50);
	print();
	
}

