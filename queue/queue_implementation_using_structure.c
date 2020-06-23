#include<stdio.h>
#include<conio.h>
#define n 5

struct queue
{
	int front;
	int rear;
	int queue[n];	
	int x;
};

void main()
{
    int ch=1,i,j=1;
    
    struct queue q1={0,0,0,0,0,0,0,n};
    
    struct queue * q = &q1;
    
   // struct queue * q =25;
   
   // q->x=5;
    
   // printf(" %d  ",q->x);	
    //printf(" %d  ",q);	
	 
    printf("Queue using Array");
    
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(q->rear==q->x) //becaz insertion start from index 1
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",j++);
                
                scanf("%d",&q->queue[q->rear++]);
            }
            break;
        case 2:
            if(q->front==q->rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",q->queue[q->front++]);
                q->x++;
            }
            break;
        case 3:
            printf("\n Queue Elements are:\n ");
            if(q->front==q->rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=q->front; i<q->rear; i++)
                {
                    printf("%d",q->queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            }
        }
    }
    getch();
}
