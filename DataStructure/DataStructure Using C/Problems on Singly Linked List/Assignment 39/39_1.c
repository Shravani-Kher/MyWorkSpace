
/////////////////////////////////////////////////////////////
//
//  Function Name:  FirstOccurance, InsertLast.
//  Parameters:     Pointer,Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           12 September 2020
//
/////////////////////////////////////////////////////////////

/*Write a program which search first occurrence of particular element from singly linear linked list.  
  Function should return position at which element is found.*/
  
//Function Prototype :int SearchFirstOcc( PNODE Head , int no );  

//Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|  

//Input element : 30  

//Output : 3 

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

int FirstOccurance(PNODE Head, int iNo)
{
	int iCnt=0;
	
	while(Head!=NULL)
	{
		iCnt++;
		if(Head->data==iNo)
		{
			break;
		}
		Head= Head->next;
	}
	
	return iCnt;
	
}

int main()
{
	PNODE First= NULL;
	int iValue1= 0;
	int iValue2= 0;
	int iRet= 0;
	int iNo= 0;
	int i= 0;
	
	printf("Number of Nodes");
	scanf("%d",&iValue2);
	
	for(i=1;i<=iValue2;i++)
	{
		printf("Enter Number");
	    scanf("%d",&iValue1);
        InsertLast(&First,iValue1);
	}
	
	printf("Enter the Number to Search");
	scanf("%d",&iNo);
    
	iRet= FirstOccurance(First,iNo);
	
	printf("The First Occurance is %d",iRet);
	
	return 0;
}



















