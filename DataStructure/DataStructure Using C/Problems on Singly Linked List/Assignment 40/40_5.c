
/////////////////////////////////////////////////////////////
//
//  Function Name:  SumDigit, InsertLast.
//  Parameters:     Pointer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           13 September 2020
//
/////////////////////////////////////////////////////////////

/*Write a program which display addition of digits of element from singly linear linked list.*/
  
//Function Prototype :int SumDigit( PNODE Head);  

//Input linked list : |110|->|230|->|20|->|240|->|640|  

//Output :  2 5 2 6 10 

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

void SumDigit(PNODE Head)
{
	int iDigit= 0;
	int iSum= 0;
	
	while(Head!=NULL)
	{
		iSum=0;
		
		while(Head->data!=0)
		{
			iDigit= (Head->data)%10;
		    iSum= iDigit+iSum;
		    (Head->data)=(Head->data)/10;
		}
		
		printf("%d\t",iSum);

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
    
	SumDigit(First);
	
	return 0;
}
