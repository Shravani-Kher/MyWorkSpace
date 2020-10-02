
/////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayPrime, InsertLast.
//  Parameters:     Pointer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           13 September 2020
//
/////////////////////////////////////////////////////////////

/*Write a program which displays all elements which are prime from singly linear linked list.*/
  
//Function Prototype :int DisplayPrime( PNODE Head);  

//Input linked list : |11|->|20|->|17|->|41|->|22|->|89|  

//Output :  11 17 41 89 

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

void DisplayPrime(PNODE Head)
{
	int i=0;
	
	while(Head!=NULL)
	{
		for(i=2;i<(Head->data);i++)
		{
			if((Head->data)%i==0)
			{
				return;
			}
		}
		
		printf("%d",Head->data);
		
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
    
	DisplayPrime(First);
	
	return 0;
}
