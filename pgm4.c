#include<stdio.h>
#define max 5

void enqueue();
void dequeue();
void display();

int queue[max];
int front=-1;
int rear=-1;

void main()
{
    int choice=0;
    while(1)
    {
      printf ("\n\nChoose one option from below");
      printf ("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
      printf ("Enter your choice \n");
      scanf ("%d", &choice);
      switch (choice)
	  {
      case 1:
	  {
	    enqueue();
	    break;
	  }
	  case 2:
	  {
	    dequeue();
	    break;
	  }
      case 3:
	  {
        display();
	    break;
	  }
	  case 4:
	  {
	    exit (0);
	    break;
	  }
	  default:
	  {
	    printf ("Please Enter valid choice ");
	  }
	}
    }
}
void enqueue()
{
    int a;
    printf("Enter the value :");
    scanf("%d",&a);

    if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=a;
    }
    else if((rear+1)%max==front)
    {
        printf("Queue is FULL");
    }
    else
    {
        rear=(rear+1)%max;
        queue[rear]=a;
    }
    printf("Item enqueued");
}
void dequeue()
{
   if(front==-1&&rear==-1)
    {
      printf("Queue is empty");
    }
    else if(front==rear)
    {
        front = -1;
        rear = -1;
        printf("Item dequeued");
    }
    else
    {
         front=(front+1)%max;
         printf("Item dequeued");
    }
}
void display()
{
    int temp=front;
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Queue elements are :\n");
        while(temp<=rear)
        {
            printf("%d\n", queue[temp]);
            temp=(temp+1)%max;
        }
    }
}
