
/////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayPerfect, InsertLast.
//  Parameters:     Pointer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           13 September 2020
//
/////////////////////////////////////////////////////////////

/*Write a program which displays all elements which are perfect from singly linear linked list.*/
  
//Function Prototype :int DisplayPerfect( PNODE Head);  

//Input linked list : |11|->|28|->|17|->|41|->|6|->|89|  

//Output :  6 28

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

int DisplayPerfect(PNODE Head)
{
	int iAns= 0;
	int i= 0;
	
	while(Head!=NULL)
	{	
	    iAns= 0;
		
	    for(i=1;i<((Head->data)/2);i++)
	    {
		    if((Head->data)%i==0)
		    {
			    iAns= iAns+i;
		    }

	    }
		
		if((Head->data)==iAns)
		{
			printf("|%d|\t",Head->data);
		}
		
	    Head=Head->next;
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
	
	DisplayPerfect(First);
	
	return 0;
}























