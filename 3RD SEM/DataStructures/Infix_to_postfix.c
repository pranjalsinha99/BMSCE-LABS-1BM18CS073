#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 20
char stack[MAX];
int top =-1;



void push(char x)
{
	
	if(top==MAX-1)
	{
		printf("\n Stack is full\n");
	}
	else 
	{
		top=top+1;
		stack[top]=x;
	}
}
char pop()
{
	if(top==-1){
		printf("Stack is undeflow");
		getchar();
		exit(1);
		
	}
	else
		return stack[top--];
	
}
int priority(char x){
	if(x==')')
		return 1;
	if(x=='+' || x=='-')
		return 2;
	if(x=='*' || x=='/')
		return 3;
		
	return 0;
}
int main()
{
	char exp[MAX];
	char *e,x;
	printf("Enter the expression");
	scanf("%s",exp);
	e=exp;
	while(*e!='\0')
	{
		
		if(isalnum(*e))
			printf("%c",*e);
		else if(*e=='(')
			push(*e);
		else if(*e==')'){
			while((x=pop())!='(')
				printf("%c",x);
		}
		else{
			while(priority(stack[top])>=priority(*e))
				printf("%c",pop());
			push(*e);
		}
		e++;
	}
	while(top!=-1)
		printf("%c",pop());
	return 1;
}

