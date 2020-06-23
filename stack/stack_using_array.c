#include <stdio.h>
#define max_size 50

void push();
void pop();
void peek();
void display();
void exitz();

int top=-1;

int a[max_size],i,choose_option,stack_size,process_status=1;

void main()
{
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
				
				case 1: push();     break;
				case 2: pop();      break;
				case 3: peek();     break;
				case 4: display();  break;
				case 5: exitz();     break;
		
		}
	}
		
}

void push()
{	

if(top!=stack_size-1)
	{	
		printf("enter element\n");
		top++;
		scanf("%d",&a[top]);//push
	}
else
	printf("stack is overflow\n");
	
}


void pop()
{
	if(top==-1)
	{
		printf("stack is underflow\n");
	}
	else
	{
		//top--;
		printf("element deleted %d\n",a[top--]);
	}
	
}
void peek()
{
	printf("top element %d\n",a[top]);
}
	
void display()
{	
	printf("stack elements are \n");
	for(i=0;i<=top;i++)
	{
		printf("%d ",a[i]);//display
	}
	printf("\n");
}

void exitz()
{
	process_status=0;
	printf("program terminated\n");
}
