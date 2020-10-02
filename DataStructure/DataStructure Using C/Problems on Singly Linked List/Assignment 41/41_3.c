
/////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayProduct, InsertLast.
//  Parameters:     Pointer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           13 September 2020
//
/////////////////////////////////////////////////////////////

/*Write a program which display product of all digits of all element from singly linear linked list.
 (Don’t consider 0)*/
 
//Function Prototype : void DisplayProduct( PNODE Head);  

//Input linked list : |11|->|20|->|32|->|41|  

//Output :   1 2 6 4 

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

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|\t",Head->next);
		
		Head= Head->next;
	}
}

void DisplayProduct(PNODE Head)
{
	int iDigit= 0;
	int iAns= 0;
	int temp= 0;
	
	while(Head!=NULL)
	{
		iAns= 1;
		temp = Head->data;
		
		while(temp!=0)
		{
			iDigit= (temp)%10;
			if(iDigit!=0)
			{
				iAns= iAns*iDigit;
			}
			(temp)= (temp)/10;
		}
		
		printf("|%d|\t",iAns);
		
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
    
	DisplayProduct(First);
	Display(First);
	
	return 0;
}
