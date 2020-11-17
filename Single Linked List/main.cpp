#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*head;

int len;
void append();
void insertatstart(int data);
void insertatend(int data);
void insertatmiddle(int data, int position);
void display();
int length();

int main()
{
	int ch, n, data, position;
	while(1)
	{
		printf("Single Linked List Creation: \n");
		printf("1. Creation \n");
		printf("2. Insert at Beginning \n");
		printf("3. Insert at End \n");
		printf("4. Insert at Certain Position \n");
		printf("5. Display \n");
		printf("6. Length\n");
		printf("7. Quit \n");
		
		printf("\nEnter your Choice: \n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: append();
					break;
			
			case 2: printf("Enter Number you want to Insert at Beginning: \n");
					scanf("%d",&data);
					insertatstart(data);
					break;	
					
			case 3: printf("Enter Number you want to Insert at End");
					scanf("%d",&data);
					insertatend(data);
					break;
					
			case 4: printf("Enter data to be inserted: \n");
					scanf("%d",&data);
					printf("Enter position :\n");
					scanf("%d",&position);
					insertatmiddle(data, position);
					break;
					
			case 5: display();	
					break;
			
			case 6: len = length();
					printf("Length: %d\n\n",len);
					break;
			
			case 7: exit(0);	
			default: printf("Invalid Choice \n\n");		
		}
	}
}



void append()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node Data: \n");
	scanf("%d",&temp->data);
	temp->next = NULL;
	
	if(head == NULL)   //List is empty
	{
		head = temp;
	}
	else
	{
		struct node* newNode;
		newNode = head;
		
		while(newNode->next != NULL)
		{
			newNode = newNode->next;
		}
		
		newNode->next = temp;
	}
}



void insertatstart(int data)
{
	struct node *newNode;
	
	newNode = (struct node *)malloc(sizeof(struct node));
	
	if(newNode == NULL)
	{
		printf("Unable \n");
	}
	else
	{
		newNode->data = data;
		newNode->next = head;
		
		head = newNode;	
	}
}



void insertatend(int data)
{
	struct node *newNode, *temp;
	
	newNode = (struct node *)malloc(sizeof(struct node));
	
	if(newNode == NULL)
	{
		printf("Unable \n");
	}
	else
	{
		newNode->data = data;
		newNode->next = NULL;
		
		temp = head;
		
		while(temp!=NULL && temp->next !=NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;	
	}
}



void insertatmiddle(int data, int position)
{
	int i;
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; 
        newNode->next = NULL;

        temp = head;

        for(i=2; i<=position-1; i++)
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {
            newNode->next = temp->next; 

            temp->next = newNode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}


void display()
{
	struct node *temp;
	
	if(head == NULL)
	{
		printf("Unable \n");
	}
	else
	{
		temp = head;
		while(temp!=NULL)
		{
			printf("Data: %d\n",temp->data);
			temp = temp->next;
		}
	}
}


int length()
{
	int count = 0;
	struct node* temp;
	temp = head;
	
	while(temp != NULL)
	{
		count++;
		temp = temp->next; 
	}
	return count;
}








