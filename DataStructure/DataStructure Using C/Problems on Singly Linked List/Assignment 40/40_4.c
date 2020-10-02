
/////////////////////////////////////////////////////////////
//
//  Function Name:  SecMaximum, InsertLast.
//  Parameters:     Pointer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           13 September 2020
//
/////////////////////////////////////////////////////////////

/*Write a program which return second maximum element from singly linear linked list. */
 
//Function Prototype :int SecMaximum( PNODE Head);  

//Input linked list : |110|->|230|->|320|->|240|  

//Output : 240 

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

void SecMaximum(PNODE Head)
{
	int iAns=0;
	int iCnt= 0;
	PNODE temp= NULL;
	temp= Head;
	iAns= Head->data;
	iCnt= Head->data;
	
	while(Head!=NULL)
	{
		if((Head->data)>iAns)
		{
			iAns=Head->data;
		}
		
		Head= Head->next;
	}
	
	while(temp!=NULL)
	{
		if((temp->data)>iCnt)
		{
			if((temp->data)<iAns)
			{
				iCnt= temp->data;
			}
		}
		
		temp=temp->next;
	}
	
	printf("%d",iCnt);
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
    
	SecMaximum(First);
	
	return 0;
}
