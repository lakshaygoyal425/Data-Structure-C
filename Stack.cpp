/* Stack Implementation using static array*/

#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5    //Pre-Process Macro

int stack[CAPACITY], top=-1;
void PUSH(int);
int POP(void);
int isFull(void);
int isEmpty(void);
void TRAVERSE(void);
void PEEK(void);



int main()
{
	int ch, item;
	while(1)
	{
		printf("1. PUSH \n");
		printf("2. POP \n");
		printf("3. PEEK \n");
		printf("4. TRAVERSE \n");
		printf("5. QUIT \n");
		
		printf("Ener Your Choice: \n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: printf("Enter Element to Push: \n");
					scanf("%d",&item);
					PUSH(item);
					break;
					
			case 2: item = POP();
					if(item == 0)
					{
						printf("Stack is Underflow \n");	
					}
					else
					{
						printf("Popped Item: %d",item);
					}
					break;
					
			case 3: PEEK();
					break;
			
			case 4: TRAVERSE();
					break;
			
			case 5: exit(0);
			
			default: printf("Invalid Input \n\n");
		}
	}
	
}

void PUSH(int ele)
{
	if(isFull())
	{
		printf("Stack is Overflow \n");
	}
	else
	{
		top++;
		stack[top] = ele;
		printf("%d Pushed \n",ele);
	}
}


int isFull()
{
	if(top == CAPACITY-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int POP()
{
	if(isEmpty())
	{
		return 0;
	}
	else
	{
		return stack[top--];
	}
}


int isEmpty()
{
	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void PEEK()
{
	if(isEmpty())
	{
		printf("Stack is Empty \n");
	}
	else
	{
		printf("Peek Element: %d\n",stack[top]);	
	}
}


void TRAVERSE()
{
	if(isEmpty())
	{
		printf("Stack is Empty \n");
	}
	else
	{
		int i;
		printf("Stack Elements: \n");
		for(i=0;i<=top;i++)
		{
			printf("%d \n",stack[i]);
			}	
	}	
}


