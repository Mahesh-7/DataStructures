#include <stdio.h>

struct stack
{
	int a[10];
	int top;	
}v;

int stack_size,process_status=1,i,choose_option;

//v.top=-1;

void stack_init(struct stack *str)
{
	str->top=-1;
}

void push(struct stack *str)
{	

if(str->top!=stack_size-1)
	{	
		printf("enter element\n");
		str->top++;
		scanf("%d",&str->a[str->top]);//push
	}
else
	printf("stack is overflow\n");
	
}


void pop(struct stack *str)
{
	if(str->top==-1)
	{
		printf("stack is underflow\n");
	}
	else
	{
		str->top--;
		printf("element deleted\n");
	}
	
}
void peek(struct stack *str)
{
	printf("top element %d\n",str->a[str->top]);
}
	
void display(struct stack *str)
{	
	printf("stack elements are \n");
	for(i=0;i<=str->top;i++)
	{
		printf("%d ",str->a[i]);//display
	}
	printf("\n");
}

void exitz()
{
	process_status=0;
	printf("program terminated\n");
}


void main()
{
	struct stack v1;
	
	stack_init(&v1);
	
	printf("enter stack size\n");
	scanf("%d",&stack_size);
	
		while(process_status)
		
		{
				
			printf("choose stack operation\n");
			printf("1.push\n");
			printf("2.pop\n");
			printf("3.peek\n");
			printf("4.display\n");
			printf("5.exit\n");
	
			scanf("%d",&choose_option);	
	
			switch(choose_option)
			{
				
				case 1: push(&v1);     break;
				case 2: pop(&v1);      break;
				case 3: peek(&v1);     break;
				case 4: display(&v1);  break;
				case 5: exitz();     break;
		
		}
	}
		
	
}
