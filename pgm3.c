#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insertAtBeginning();
void insertAtEnd();
void insertAtRandom();
void deleteAtBeginning();
void deleteAtEnd();
void deleteAtRandom();
void display();

void main ()
{
    int choice =0;
    while(choice != 9)
    {
    printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Show\n8.Exit\n");
    printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            insertAtBeginning();
            break;
            case 2:
            insertAtEnd();
            break;
            case 3:
            insertAtRandom();
            break;
            case 4:
            deleteAtBeginning();
            break;
            case 5:
            deleteAtEnd();
            break;
            case 6:
            deleteAtRandom();
            break;
            case 7:
            display();
            break;
            case 8:
            exit(0);
            break;
            default:
            printf("Please enter valid choice..");
        }
            }
}
void insertAtBeginning()
{
    struct node *newNode;
    int item;
    newNode = (struct node *) malloc(sizeof(struct node *));
    if(newNode == NULL)
    {
        printf("\nList is Empty");
    }
    else
    {
        printf("\nEnter value\n");
        scanf("%d",&item);
        newNode->data = item;
        newNode->next = head;
        head = newNode;
        printf("\nNode inserted!!!");
    }

 }
    void insertAtEnd()
{
    struct node *newNode,*temp;
    int item;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("\nList is Empty");
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d",&item);
        newNode->data = item;
        if(head == NULL)
        {
            newNode -> next = NULL;
            head = newNode;
            printf("\nNode inserted");
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = newNode;
            newNode->next = NULL;
            printf("\nNode inserted");

        }
    }
}
void insertAtRandom()
{
    int i,loc,item;
    struct node *newNode, *temp;
    newNode = (struct node *) malloc (sizeof(struct node));
    if(newNode == NULL)
    {
        printf("\nList is Empty");
    }
    else
    {
        printf("\nEnter element value");
        scanf("%d",&item);
        newNode->data = item;
        printf("\nEnter the location after which you want to insert ");
        scanf("\n%d",&loc);
        temp=head;
        for(i=0;i<loc;i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\ncannot insert\n");
                return;
            }

        }
        newNode ->next = temp ->next;
        temp ->next = newNode;
        printf("\nNode inserted!!!!!!");
    }
}
void deleteAtBeginning()
{
    struct node *newNode;
    if(head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        newNode = head;
        head = newNode->next;
        free(newNode);
        printf("\nNode deleted from the begining!!!!!\n");
    }
}
void deleteAtEnd()
{
    struct node *newNode,*newNode2;
    if(head == NULL)
    {
        printf("\nList is empty");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    }

    else
    {
        newNode = head;
        while(newNode->next != NULL)
        {
            newNode2 = newNode;
            newNode = newNode ->next;
        }
        newNode2->next = NULL;
        free(newNode);
        printf("\nDeleted Node from the last!!!!\n");
    }
}
void deleteAtRandom()
{
    struct node *newNode,* newNode2;
    int loc,i;
    printf("\n Enter the location of the node after which you want to perform deletion \n");
    scanf("%d",&loc);
    newNode=head;
    for(i=0;i<loc;i++)
    {
        newNode2 = newNode;
        newNode = newNode->next;

        if(newNode == NULL)
        {
            printf("\nCannot delete");
            return;
        }
    }
    newNode2 ->next = newNode ->next;
    free(newNode);
    printf("\nDeleted node %d ",loc+1);
}
void display()
{
    struct node *newNode;
    newNode = head;
    if(newNode == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nPrinting values . . . . .\n");
        while (newNode!=NULL)
        {
            printf("\n%d",newNode->data);
            newNode = newNode -> next;
        }
    } }
