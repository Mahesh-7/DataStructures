#include <stdio.h>
int rear,front,size=5;
int run=1;
int queue[5];
void enqueue()
{
	int data;
	printf("enter data:");
	scanf("%d",&data);
	if(rear!=size)
	{
	
		queue[rear++]=data;
		
	}
	else
	{
		printf("full");
	}
}
void dequeue()
{
	if(rear==front)
	{
		printf("empty");
	}
	else
	{
		printf("deleted %d \n",queue[front++]);
		size++;
	}
}
void display()
{
	
	int i;
	for(i=front;i<rear;i++)
	{
		printf("%d ",queue[i]);
	}
	printf("\n");
}
void stop()
{
	run=0;
	printf("terminated");
	while(1);
}
void main()
{
	int choose;
	while(run)
	{
	
		printf("choose option \n 1.enqueue \n 2.dequeue \n 3.Display \n 4.exit \n");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:  enqueue(); break;
			case 2:  dequeue(); break;
			case 3:  display(); break;
			case 4: stop(); break;
				
		}
	}
}
