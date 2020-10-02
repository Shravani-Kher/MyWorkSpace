
/////////////////////////////////////////////////////////////
//
//  Function Name:  DisplaySmall, InsertLast.
//  Parameters:     Pointer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           13 September 2020
//
/////////////////////////////////////////////////////////////

/*Write a program which display smallest digits of all element from singly linear linked list.*/
 
//Function Prototype : void DisplaySmall( PNODE Head);  

//Input linked list : |11|->|250|->|532|->|415|  

//Output :   1 0 2 1 

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

int InsertLast(PPNODE Head, int iValue1)
{
	PNODE Newn= NULL;
	PNODE temp= NULL;
	
	Newn= (PNODE)malloc(sizeof(NODE));
	
	Newn->data= iValue1;
	Newn->next= NULL;
	
	temp=*Head;
	
	if(*Head==NULL)
	{
		*Head= Newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp= temp->next;			
		}
		
		temp->next=Newn;
	}
		
}

void Display(PPNODE Head)
{
	PNODE temp= NULL;
	
	while(temp->next!=NULL)
	{
		printf("\n|%d|\t",temp->data);
		
		temp = temp->next;
	}
}


void DisplaySmall(PNODE Head)
{
	int iDigit= 0;
	int iSmall= 0;
	int temp= 0;
	
	while(Head!=NULL)
	{
		temp= Head->data;
		
		iSmall= (Head->data)%10;
		
		while(temp!=0)
		{	
			iDigit= (temp)%10;
			
			if((iDigit)<iSmall)
			{
				iSmall= iDigit;
			}
			
			(temp)= (temp)/10;
		}
		
		printf("|%d|\t",iSmall);
		
		Head= Head->next;
	}
}

int main()
{
	PNODE First= NULL;
	int iValue1= 0;
	int iValue2= 0;
	int i= 0;
	
	printf("Number of Nodes");
	scanf("%d",&iValue2);
	
	for(i=1;i<=iValue2;i++)
	{
		printf("Enter Number");
	    scanf("%d",&iValue1);
        InsertLast(&First,iValue1);
	}
    
	DisplaySmall(First);
	Display(&First);
	
	return 0;
}
