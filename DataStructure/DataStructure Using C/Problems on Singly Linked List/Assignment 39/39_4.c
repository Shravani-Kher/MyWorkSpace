
/////////////////////////////////////////////////////////////
//
//  Function Name:  ChkLargest, InsertLast.
//  Parameters:     Pointer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           12 September 2020
//
/////////////////////////////////////////////////////////////

/*Write a program which return largest element from singly linear linked list.*/
  
//Function Prototype :int Maximum( PNODE Head);  

//Input linked list : |110|->|230|->|320|->|240|  

//Output : 320

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

int ChkLargest(PNODE Head)
{
	int iAns= 0;
	
	while(Head!=NULL)
	{	
		if((Head->data)>iAns)
		{
			iAns=Head->data;
		}
		Head= Head->next;
	}
	
	return iAns;
	
}

int main()
{
	PNODE First= NULL;
	int iValue1= 0;
	int iValue2= 0;
	int iRet= 0;
	int i= 0;
	
	printf("Number of Nodes");
	scanf("%d",&iValue2);
	
	for(i=1;i<=iValue2;i++)
	{
		printf("Enter Number");
	    scanf("%d",&iValue1);
        InsertLast(&First,iValue1);
	}
    
	iRet= ChkLargest(First);
	
	printf("The Largest Number is %d",iRet);
	
	return 0;
}



















