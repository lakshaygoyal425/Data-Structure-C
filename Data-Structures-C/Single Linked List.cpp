#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node* link;	
};

struct node* root = NULL;
int len;
void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void deletee(void);

int main()
{
	int ch;
	while(1)
	{
		printf("Single Linked List Operations: \n");
		printf("1. Append\n");
		printf("2. Add at Begin\n");
		printf("3. Add at After\n");
		printf("4. Length\n");
		printf("5. Display\n");
		printf("6. Delete\n");
		printf("7. Quit\n");
		
		printf("Enter your choice: \n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: append();
					break;
					
			case 2: addatbegin();
					break;
					
			case 3: addatafter();
					break;
					
			case 4: len = length();
					printf("Length: %d\n\n",len);
					break;
					
			case 5: display();
					break;
					
			case 6: deletee();
					break;
					
			case 7: exit(1);
			
			default: printf("Invalid Choice \n"); 												
		}
	}
}



void append()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node Data: \n");
	scanf("%d",&temp->data);
	temp->link = NULL;
	
	if(root == NULL)   //List is empty
	{
		root = temp;
	}
	else
	{
		struct node* p;
		p = root;
		
		while(p->link != NULL)
		{
			p = p->link;
		}
		
		p->link = temp;
	}
}


int length()
{
	int count = 0;
	struct node* temp;
	temp = root;
	
	while(temp != NULL)
	{
		count++;
		temp = temp->link; 
	}
	return count;
}



void display()
{
	struct node* temp;
	temp = root;
	
	if(temp == NULL)
	{
		printf("List is Empty \n\n");
	}
	else
	{
		while(temp != NULL)
		{
			printf("%d-->",temp->data);
			temp = temp->link;
		}
		printf("\n\n");
	}
}


void addatbegin(void)
{
	
}


void addatafter(void)
{
	
}


void deletee(void)
{
	
}
