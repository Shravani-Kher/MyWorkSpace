
/////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayLarge, InsertLast.
//  Parameters:     Pointer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           13 September 2020
//
/////////////////////////////////////////////////////////////

/*Write a program which display largest digits of all element from singly linear linked list.*/
 
//Function Prototype : void DisplayLarge( PNODE Head);  

//Input linked list : |11|->|250|->|532|->|419|  

//Output :   1 5 5 9  

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


void DisplayLarge(PNODE Head)
{
	int iDigit= 0;
	int iLarge= 0;
	int temp= 0;
	
	while(Head!=NULL)
	{
		temp= Head->data;
		iLarge= 0;
		
		while(temp!=0)
		{	
			iDigit= (temp)%10;
			
			if((iDigit)>iLarge)
			{
				iLarge= iDigit;
			}
			
			(temp)= (temp)/10;
		}
		
		printf("|%d|\t",iLarge);
		
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
    
	DisplayLarge(First);
	Display(&First);
	
	return 0;
}
