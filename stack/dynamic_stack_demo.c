#include <stdio.h>
#include <stdlib.h>

int run=1;
int choose;
int count=0;
int size=5;
	
typedef struct stacks
{

	int data;
	struct node * link;
	
}_stack;

_stack * top =NULL;

void push( )
{

  	_stack *  temp;
  
 	temp=(_stack*)malloc(sizeof(_stack));

  	printf("enter data:");
  	scanf("%d",&val);
  	temp->data=val;
  	temp->link=top;
  	top=temp;

  }

	
}

void display()
{
	_stack * temp;
	temp=top;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->link;
		
	}
}

void pop()
{
	_stack *temp;
	
	temp=top;

	
	temp=temp->link;

	if(top==NULL)
	{
		printf("stack full");
	}

	printf("deleted %d \n",top->data);
	
	top->link=NULL;
	
	free(top);
	
	top=temp;
	
}

void stop()
{
	run=0;
	printf("process terminated");
	while(1);
}

void main()

{
_stack p;

_stack * ptr=&p;
	
	while(run)
	{
		printf("choose choice\n 1.push \n 2.display \n 3.pop \n 4.exit\n");
		
		scanf("%d",&choose);
		
		
		switch(choose)
		{
			case 1:
				push();
				break;
			case 2:
				display();
				printf("\n");
				break;
			case 3:
				pop();
				break;
			case 4:
				stop();
				break;
			
		}
	}
	
}
