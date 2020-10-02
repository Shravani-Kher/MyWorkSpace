
/////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayPallindrome, InsertLast.
//  Parameters:     Pointer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           13 September 2020
//
/////////////////////////////////////////////////////////////

/*Write a program which display all palindrome elements of singly linked list.*/
  
//Function Prototype : void DisplayPallindrome( PNODE Head);  

//Input linked list : |11|->|28|->|17|->|414|->|6|->|89|  

//Output :  11 6 414 

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

void DisplayPallindrome(PNODE Head)
{
	int iDigit= 0;
	int iAns= 0;
	int temp= 0;
	
	while(Head!=NULL)
	{
		iAns= 0;
		temp= Head->data;
		
		while(Head->data!=0)
		{	
			iDigit= (Head->data)%10;
			iAns= (iAns*10)+iDigit;
			(Head->data)= (Head->data)/10;
		}
		
		if(temp==iAns)
		{
			printf("|%d|\n",temp);
		}
		
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
    
	DisplayPallindrome(First);
	
	return 0;
}
