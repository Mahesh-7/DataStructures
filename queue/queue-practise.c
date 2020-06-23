#include <stdio.h>

#define max_size 10

void enqueue();
void dequeue();
void peek();
void display();
void exitz();

int queue[max_size],i,size,rear=0,front=0,process=1,choose_option;

void main()
{	
	
		printf("enter queue size\n");
		scanf("%d",&size);
		
		while(process)
		{
				
			printf("choose queue operation\n");
			printf("1.enqueue\n");
			printf("2.dequeue\n");
			printf("3.peek\n");
			printf("4.display\n");
			printf("5.exit\n");
	
			scanf("%d",&choose_option);	
	
			switch(choose_option)
			{
				
				case 1: enqueue();     break;
				case 2: dequeue();      break;
				case 3: peek();     	break;
				case 4: display(); 		 break;
				case 5: exitz();   		  break;
		
			}
	}
			
}
	
void enqueue()
{	

if(rear!=size)
	{	
		printf("enter element\n");
		scanf("%d",&queue[rear++]);//insertion
	}
else
	printf("queue is overflow\n");
	
}


void dequeue()
{
	if(rear==front)
	{
		printf("queue is underflow\n");
	}
	else
	{
		printf("element deleted %d\n",queue[front++]);
		size++;
	}
	
}
void peek()
{
	printf("top element %d\n",queue[--rear]);
}
	
void display()
{	
	printf("queue elements are \n");
	
	for(i=front;i<rear;i++)
	{
		printf("%d ",queue[i]);//display
	}
	printf("\n");
}

void exitz()
{
	process=0;
	printf("program terminated\n");
}
