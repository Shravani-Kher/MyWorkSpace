#include<stdio.h>
#include<stdlib.h>

/*********************************************************************************************/
//                          SINGLY LINKED LIST 
/*********************************************************************************************/


void SinglyLinkedList()
{
	struct Node
	{
		int data;
		struct Node* next;
	};

	typedef struct Node NODE;
	typedef struct Node* PNODE;
	typedef struct Node** PPNODE;
	
////////////////////////////////////////////////////////////////////////////////////////////
	
void Display(PNODE Head)
	{
		
		while(Head!=NULL)
		{
			printf("|%d|->",Head->data);
			Head= Head->next;
		}
		
		
	}

////////////////////////////////////////////////////////////////////////////////////////////
	
	int Count(PNODE Head)
	{
		int iCnt=0;
		
		while(Head!=NULL)
		{
			iCnt++;
			Head= Head->next;
		}
		
		return iCnt;
		
	}

/////////////////////////////////////////////////////////////////////////////////////////////
	
	void InsertAtFirst(PPNODE Head, int no)
	{
		PNODE newn = NULL;
		
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data = no;
		newn->next = NULL;
		
		if(*Head==NULL)
		{
			*Head = newn;
		}
		else
		{
			newn->next = *Head;
			*Head = newn;
		}
	}
	
///////////////////////////////////////////////////////////////////////////////////////////

	void InsertAtLast(PPNODE Head, int no)
	{
		PNODE newn = NULL;
		PNODE temp = *Head;
		
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
		
		if(*Head==NULL)
		{
			*Head = newn;
		}
		else
		{
			
			while(temp->next!=NULL)
			{
				temp= temp->next;
			}
			
			temp->next = newn;
		}
	}

///////////////////////////////////////////////////////////////////////////////////////////
	
	void DeleteFirst(PPNODE Head)
	{
		PNODE temp= *Head;
		
		if(*Head!=NULL)
		{
			*Head= (*Head)->next;
			free(temp);
		}
	
	}

///////////////////////////////////////////////////////////////////////////////////////////
	
	void DeleteLast(PPNODE Head)
	{
		PNODE temp= *Head;
		
		if(*Head==NULL)
		{
			return;
		}
		else if((*Head)->next==NULL)
		{
			free(*Head);
			*Head= NULL;
		}
		else
		{
			while(temp->next->next!=NULL)
			{
				temp= temp->next;
			}
			
			free(temp->next);
			temp->next= NULL;
		}
		
	}
	
/////////////////////////////////////////////////////////////////////////////////////////////
	
	void InsertAtPosition(PPNODE Head, int no,int Position)
	{
		PNODE newn = NULL;
		PNODE temp = *Head;
		int iCnt=0,i=0;
		int iSize=0;
		
		iSize = Count(*Head);
		
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
		
		
		if((Position<1)||(Position>iSize+1))
		{
			return;
		}
		else if(Position==1)
		{
			InsertAtFirst(Head,no);
		}
		else if(Position==iSize)
		{
			InsertAtLast(Head,no);
		}
		else
		{
			for(i=1;i<Position;i++)
			{
				temp= temp->next;
			}
			
			newn->next = temp;
			temp->next= newn;
		}
	}
/////////////////////////////////////////////////////////////////////////////////////////////
	
	void DeleteAtPosition(PPNODE Head, int Position)
	{
		PNODE temp = *Head;
		PNODE NO = NULL;
		
		int iSize = 0,i=0;
		
		iSize = Count(*Head);
		
		if((Position<1)||(Position>iSize))
		{
			return;
		}
		else if(Position==1)
		{
			DeleteFirst(Head);
		}
		else if(Position==iSize)
		{
			DeleteLast(Head);
		}
		else
		{
			for(i=1;i<Position-1;i++)
			{
				temp= temp->next;
			}
			
			NO= temp->next;
			temp->next= temp->next->next;
			
			free(NO);
		}
	}
	
//////////////////////////////////////////////////////////////////////////////////////////

	PNODE First = NULL;
	int value=0,choice=1,Position=0;

	printf("Please Choose One Option\n\n");
	
	while(choice)
	{
		printf("\n-----------------------------------------------\n\n");
		
		printf("\n1:: Insert At First\n\n");
		
		printf("\n2:: Insert At Last\n\n");
		
		printf("\n3:: Delete First\n\n");
		
		printf("\n4:: Delete Last\n\n");
	
		printf("\n5:: Insert At Position\n\n");
	
		printf("\n6:: Delete At Position\n\n");
	
		printf("\n7:: Count Elements in Linked List\n\n");
	
		printf("\n8:: Display Elements of Linked List\n\n");
		
		printf("\n0:: EXIT\n\n");
	
		printf("\n-----------------------------------------------\n\n");
	
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
		
				printf("Enter the Element");
				scanf("%d",&value);
				InsertAtFirst(&First,value);
				break;
			
			case 2:
		
				printf("Enter the Element");
				scanf("%d",&value);
				InsertAtLast(&First,value);
				break;
		
			case 3:
				
				DeleteFirst(&First);
				break;
		
			case 4:
		
				DeleteLast(&First);
				break;
				
			case 5:
		
				printf("Enter the Element");
				scanf("%d",&value);
				printf("Enter the Position");
				scanf("%d",&Position);
				
				InsertAtPosition(&First,value,Position);
				
				break;
		
			case 6:
		
				printf("Enter the Element");
				scanf("%d",&value);
				printf("Enter the Position");
				scanf("%d",&Position);
				
				DeleteAtPosition(&First,Position);
				
				break;
				
			case 7:
				
				Count(First);
				break;
			
			case 8:
			
				Display(First);
				break;
			
			case 0:
				
				exit(0);
				
			default:
				
				printf("Wrong Input");
		}
	}
}
	
/*********************************************************************************************/
//                          DOUBLY LINKED LIST 
/*********************************************************************************************/	

void DoublyLinkedList()
{
	struct Node
	{
		int data;
		struct Node* next;
		struct Node* prev;
	};

	typedef struct Node NODE;
	typedef struct Node* PNODE;
	typedef struct Node** PPNODE;
	
//////////////////////////////////////////////////////////////////////////////////////////////

	int Count(PNODE Head)
	{
		int iCnt = 0;
		
		while(Head!=NULL)
		{
			iCnt++;
			Head = Head->next;
		}
		
		return iCnt;
	}
	
//////////////////////////////////////////////////////////////////////////////////////////////
	
	void Display(PNODE Head)
	{
		
		while(Head!=NULL)
		{
			printf("|%d|<-->",Head->data);
			Head = Head->next;
		}
		
	}

//////////////////////////////////////////////////////////////////////////////////////////////

	void InsertAtFirst(PPNODE Head, int no)
	{
		PNODE newn = NULL;
		
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		if(*Head==NULL)
		{
			*Head= newn;
		}
		else
		{
			newn->next = *Head;
			newn->next->prev = newn;
			*Head = newn;
		}
	}

/////////////////////////////////////////////////////////////////////////////////////////////
	
	void InsertAtLast(PPNODE Head, int no)
	{
		PNODE newn = NULL;
		PNODE temp= *Head;
		
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		if(*Head==NULL)
		{
			*Head = newn;
		}
		else
		{
			while(temp->next!=NULL)
			{
				temp= temp->next;
			}
			
			temp->next = newn;
			newn->prev = temp;
		}
	}

//////////////////////////////////////////////////////////////////////////////////////////////	

	void DeleteFirst(PPNODE Head)
	{
		if(*Head==NULL)
		{
			return;
		}
		else if((*Head)->next==NULL)
		{
			free(*Head);
			*Head = NULL;
		}
		else
		{
			(*Head) = (*Head)->next;
			free((*Head)->prev);
			(*Head)->prev = NULL;
		}
	}

//////////////////////////////////////////////////////////////////////////////////////////////

	void DeleteLast(PPNODE Head)
	{
		PNODE temp = *Head;
		
		if(*Head==NULL)
		{
			return;
		}
		else if((*Head)->next==NULL)
		{
			free(*Head);
			*Head = NULL;
		}
		else
		{
			while(temp->next->next!=NULL)
			{
				temp= temp->next;
			}
			
			free(temp->next);
			temp->next = NULL;
			
		}
	}
	
//////////////////////////////////////////////////////////////////////////////////////////////

	void InsertAtPosition(PPNODE Head, int no, int Position)
	{
		PNODE newn = NULL;
		PNODE temp = *Head;
		
		int size = 0, i = 0;
		
		size = Count(*Head);
		
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		if((Position<1)||(Position>size+1))
		{
			return;
		}
		else if(Position==1)
		{
			InsertAtFirst(Head,no);
		}
		else if(Position==size+1)
		{
			InsertAtLast(Head,no);
		}
		else
		{
			for(i=0;i<Position-1;i++)
			{
				temp= temp->next;
			}
			
			newn->next = temp->next;
			
			temp->next->prev = newn;
			
			temp->next = newn;
			
			newn->prev = temp;
		}
	}
	
//////////////////////////////////////////////////////////////////////////////////////////////

	void DeleteAtPosition(PPNODE Head, int Position)
	{
		PNODE temp = *Head;
		
		int size = 0, i = 0;
		
		size = Count(*Head);
		
		if((Position<1)||(Position>size))
		{
			return;
		}
		else if(Position==1)
		{
			DeleteFirst(Head);
		}
		else if(Position==size+1)
		{
			DeleteLast(Head);
		}
		else
		{
			for(i=1;i<Position-1;i++)
			{
				temp = temp->next;
			}
			
			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
			
		}
	}
	
//////////////////////////////////////////////////////////////////////////////////////////////
	
	PNODE First = NULL;
	
	int choice=1,value=0,Position=0,ret=0;
	
	printf("Please Choose One Option\n\n");
	
	while(choice)
	{
		printf("\n-----------------------------------------------\n\n");
		
		printf("\n1:: Insert At First\n\n");
		
		printf("\n2:: Insert At Last\n\n");
		
		printf("\n3:: Delete First\n\n");
		
		printf("\n4:: Delete Last\n\n");
	
		printf("\n5:: Insert At Position\n\n");
	
		printf("\n6:: Delete At Position\n\n");
	
		printf("\n7:: Count Elements in Linked List\n\n");
	
		printf("\n8:: Display Elements of Linked List\n\n");
		
		printf("\n0:: EXIT\n\n");
	
		printf("\n-----------------------------------------------\n\n");
	
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				
				printf("Enter the Element : ");
				scanf("%d",&value);
				
				InsertAtFirst(&First,value);
				
				break;
			
			case 2:
		
				printf("Enter the Element : ");
				scanf("%d",&value);
				
				InsertAtLast(&First,value);
				
				break;
		
			case 3:
				
				DeleteFirst(&First);
				
				break;
		
			case 4:
		
				DeleteLast(&First);
				
				break;
				
			case 5:
		
				printf("Enter the Element");
				scanf("%d",&value);
				
				printf("Enter the Position");
				scanf("%d",&Position);
				
				InsertAtPosition(&First,value,Position);
				
				break;
		
			case 6:
		
				printf("Enter the Position");
				scanf("%d",&Position);
				
				DeleteAtPosition(&First,Position);
				
				break;
				
			case 7:
				
				ret=Count(First);
				printf("Total Elements are: %d",ret);
				break;
			
			case 8:
			
				Display(First);
				break;
			
			case 0:
				
				exit(0);
				
			default:
				
				printf("Wrong Input");
		}
	}
	
}


/*********************************************************************************************/
//                          SINGLY CIRCULAR LINKED LIST 
/*********************************************************************************************/


void SinglyCircularLinkedList()
{
	struct Node
	{
		int data;
		struct Node* next;
	};
	
	typedef struct Node NODE;
	typedef struct Node* PNODE;
	typedef struct Node** PPNODE;
	
///////////////////////////////////////////////////////////////////////////////////////////////

	void Display(PNODE Head, PNODE Tail)
	{
		if((Head == NULL)&&(Tail == NULL))
		{
			return;
		}
	
		do
		{
			printf("|%d|<-->",Head->data);
			Head = Head->next;
		}while(Head != Tail->next);
		
		
	}
	
///////////////////////////////////////////////////////////////////////////////////////////////

	int Count(PNODE Head, PNODE Tail)
	{
		int iCnt = 0;
		
		if((Head != NULL)&&(Tail != NULL))
		{
			do
			{
				iCnt++;
				Head = Head->next;
			}while(Head != Tail->next);	
		}

		return iCnt;
		
		printf("%d",iCnt);
	}
	
///////////////////////////////////////////////////////////////////////////////////////////////

	void InsertAtFirst(PPNODE Head, PPNODE Tail, int no)
	{
		PNODE newn = NULL;
		
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
		
		if((*Head==NULL)&&(*Tail==NULL))
		{
			*Head = newn;
			*Tail = newn;
		}
		else
		{
			newn->next = *Head;
			*Head = newn;
		}
		
		(*Tail)->next = *Head;
	}
	
///////////////////////////////////////////////////////////////////////////////////////////////

	void DeleteFirst(PPNODE Head, PPNODE Tail)
	{
		if((*Head==NULL)&&(*Tail==NULL))
		{
			return;
		}
		
		if(*Head==*Tail)
		{
			free(*Head);
			
			*Head = NULL;
			
			*Tail = NULL;
			
			return;
		}
		else
		{
			*Head = (*Head)->next;
			
			free((*Tail)->next);
			
			(*Tail)->next = *Head;
		}
	}
	
///////////////////////////////////////////////////////////////////////////////////////////////

	void InsertAtLast(PPNODE Head, PPNODE Tail, int no)
	{
		PNODE newn = NULL;
		PNODE temp = NULL;
		
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
		
		if((*Head == NULL)&&(*Tail == NULL))
		{
			*Head = newn;
			
			*Tail = newn;
			
			newn->next = *Head;
		}
		else
		{
			newn->next = (*Tail)->next;
			
			(*Tail)->next = newn;
			
			*Tail = newn;
			
		}
	}

///////////////////////////////////////////////////////////////////////////////////////////////

	void DeleteLast(PPNODE Head, PPNODE Tail)
	{
		PNODE temp = NULL;
		
		if((*Head == NULL)&&(*Tail == NULL))
		{
			return;
		}
		else if(*Head == *Tail)
		{
			free(*Head);
			*Head = NULL;
			*Tail = NULL;
			
			return;
		}
		else
		{
			temp = *Head;
			
			while(temp->next != *Tail)
			{
				temp = temp->next;
			}
			
			free(temp->next);
			*Tail = temp;
			(*Tail)->next = *Head;
		}
	}
	
///////////////////////////////////////////////////////////////////////////////////////////////

	void InsertAtPosition(PPNODE Head, PPNODE Tail, int no, int Position)
	{
		int iCnt = 0, i = 0;
		
		iCnt = Count(*Head, *Tail);
		
		PNODE newn = NULL;
		PNODE temp = NULL;
		
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = 0;
		newn->next = NULL;
		
		if((Position<1)||(Position>iCnt+1))
		{
			return;
		}
		else if(Position == 1)
		{
			InsertAtFirst(Head,Tail,no);
		}
		else if(Position == iCnt+1)
		{
			InsertAtLast(Head,Tail,no);
		}
		else
		{
			temp = *Head;
			
			for(i=1;i<Position-1;i++)
			{
				temp = temp->next;
			}
			
			newn->next = temp->next;
			
			temp->next = newn;
			
		}
	}

///////////////////////////////////////////////////////////////////////////////////////////////

	void DeleteAtPosition(PPNODE Head,PPNODE Tail,int Position)
	{
		PNODE temp1 = *Head;
		PNODE temp2 = NULL;
		
		int iCnt=0,i=0;
		
		iCnt = Count(*Head,*Tail);
		
		if((Position<1)||(Position>iCnt))
		{
			return;
		}
		else if(Position == 1)
		{
			DeleteFirst(Head,Tail);
		}
		else if(Position == iCnt)
		{
			DeleteLast(Head,Tail);
		}
		else
		{
			for(i=1;i<Position-1;i++)
			{
				temp1= temp1->next;
			}
			
			temp2 = temp1->next;
			
			temp1->next = temp2->next;
			
			free(temp2);
		}
	}

///////////////////////////////////////////////////////////////////////////////////////////////
	
	PNODE First = NULL;
	PNODE Last = NULL;
	
	int choice= 1, value= 0, Position= 0;
	
	printf("Please Choose One Option\n\n");
	
	while(choice)
	{
		printf("\n-----------------------------------------------\n\n");
		
		printf("\n1:: Insert At First\n\n");
		
		printf("\n2:: Insert At Last\n\n");
		
		printf("\n3:: Delete First\n\n");
		
		printf("\n4:: Delete Last\n\n");
	
		printf("\n5:: Insert At Position\n\n");
	
		printf("\n6:: Delete At Position\n\n");
	
		printf("\n7:: Count Elements in Linked List\n\n");
	
		printf("\n8:: Display Elements of Linked List\n\n");
		
		printf("\n0:: EXIT\n\n");
	
		printf("\n-----------------------------------------------\n\n");
	
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
		
				printf("Enter the value\t");
				scanf("%d",&value);
				
				InsertAtFirst(&First,&Last,value);
				
				break;
			
			case 2:
		
				printf("Enter the value\t");
				scanf("%d",&value);
				
				InsertAtLast(&First,&Last,value);
				break;
		
			case 3:
				
				DeleteFirst(&First,&Last);
				break;
		
			case 4:
		
				DeleteLast(&First,&Last);
				break;
				
			case 5:
		
				printf("Enter the Element\t");
				scanf("%d",&value);
				
				printf("Enter the Position\t");
				scanf("%d",&Position);
				
				InsertAtPosition(&First,&Last,value,Position);
				break;
		
			case 6:
		
				printf("Enter the Position\t");
				scanf("%d",&Position);
				
				DeleteAtPosition(&First,&Last,Position);
				break;
				
			case 7:
				
				Count(First,Last);
				break;
			
			case 8:
			
				Display(First,Last);
				break;
			
			case 0:
				
				exit(0);
				
			default:
				
				printf("Wrong Input");
		}
	}
	
}

//////////////////////////////////////////////////////////////////////////////////////////////
                              DOUBLY CIRCULAR LINKED LIST
//////////////////////////////////////////////////////////////////////////////////////////////

void DoublyCircularLinkedList()
{
	struct Node
	{
		int data;
		struct Node* next;
		struct Node* prev;
	};
	
	typedef struct Node NODE;
	typedef struct Node* PNODE;
	typedef struct Node** PPNODE;
	
//////////////////////////////////////////////////////////////////////////////////////////////

	void Display(PNODE Head, PNODE Tail)
	{
		if((Head == NULL)||(Tail == NULL))
		{
			return;
		}
		
		do{
			printf("|%d|<-->",Head->data);
			Head = Head->next;
		}while(Head != Tail->next)
	}
	
//////////////////////////////////////////////////////////////////////////////////////////////

	int Count(PNODE Head, PNODE Tail)
	{
		int iCnt = 0
		
		if((Head == NULL)||(Tail == NULL))
		{
			return;
		}
		
		do{
			iCnt++;
			Head = Head->next;
		}while(Head != Tail->next)
		
		return iCnt;
		
		printf("Total Number of Elements: ",iCnt);
		
	}
	
//////////////////////////////////////////////////////////////////////////////////////////////

	void InsertAtFirst(PPNODE Head, PPNODE Tail, int no);
	{
		PNODE newn = NULL;
		
		newn = (PNODE)malloc(sizeof(NODE))
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		if((*Head == NULL)&&(*Tail == NULL))
		{
			*Head = newn;
			*Tail = newn;
		}
		else
		{
			newn->next = *Head;
			(*Head)->prev = newn;
			*Head = newn;
		}
		
		(*Head)->prev = *Tail;
		(*Tail)->next = *Head;
	}
	
//////////////////////////////////////////////////////////////////////////////////////////////

	void DeleteFirst(PPNODE Head, PPNODE Tail)
	{
		if((*Head == NULL)&&(*Tail == NULL))
		{
			return;
		}
		else
		{
			free(*Head);
			
			*Head = *Head->next;
		}
		
		(*Head)->prev = *Tail;
		(*Tail)->next = *Head;
	}
	
//////////////////////////////////////////////////////////////////////////////////////////////

	void InsertAtLast(PPNODE Head, PPNODE Tail, int no)
	{
		PNODE newn = NULL;
		
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		if((*Head == NULL)&&(*Tail == NULL))
		{
			*Head = newn;
			*Tail = newn;
		}
		else
		{
			*Tail->next = newn;
			newn->prev = *Tail;
			*Tail = newn;
		}
		
		(*Head)->prev = *Tail;
		(*Tail)->next = *Head;
	}
	
//////////////////////////////////////////////////////////////////////////////////////////////

	void DeleteLast(PPNODE Head, PPNODE Tail)
	{
		if((*Head == NULL)&&(*Tail == NULL))
		{
			return;
		}
		else
		{
			free(*Tail);
			*Tail = (*Tail)->prev;
		}
		
		(*Head)->prev = *Tail;
		(*Tail)->next = *Head;
	}
	
//////////////////////////////////////////////////////////////////////////////////////////////

	void InsertAtPosition(PPNODE Head, PPNODE Tail, int no, int Position)
	{
		PNODE newn = NULL;
		PNODE temp = NULL;
		PNODE temp2 = NULL;
		
		int iSize = 0, i = 0;
		
		iSize = Count(*Head,*Tail);
		
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		if((Position<1)||(Position>iSize+1))
		{
			return;
		}
		else if(Position == 1)
		{
			InsertAtFirst(Head,Tail,no);
		}
		else if(Position == iSize+1)
		{
			InsertAtLast(Head,Tail,no);
		}
		else
		{
			temp = *Head;
			
			for(i=1;i<Position-1;i++)
			{
				temp = temp->next;
			}
			
			newn->prev = temp;
			newn->next = temp->next;
			temp2 = newn->next;
			temp2->prev = newn;
		}
		(*Head)->prev = *Tail;
		(*Tail)->next = *Head;
	}
	
//////////////////////////////////////////////////////////////////////////////////////////////

	void DeleteAtPosition(PPNODE Head, PPNODE Tail, int Position)
	{
		PNODE newn = NULL;
		PNODE temp = NULL;
		PNODE temp2 = NULL;
		
		int iSize = 0;
		
		iSize = Count(*Head,*Tail);
		
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		if((Position<1)||(Position>iSize))
		{
			return;
		}
		else if(Position == 1)
		{
			DeleteFirst(Head,Tail);
		}
		else if(Position == iSize)
		{
			DeleteLast(Head,Tail);
		}
		else
		{
			temp = *Head;
			
			free(temp->next);
			
			temp2 = temp->next->next;
			
			temp2->prev = temp;
			
			temp->next = temp2;
		}
		(*Head)->prev = *Tail;
		(*Tail)->next = *Head;
	}

//////////////////////////////////////////////////////////////////////////////////////////////

	PNODE First = NULL;
	PNODE Last = NULL;

	int choice = 1, value = 0, Position = 0; 
	
	printf("Please Choose One Option\n\n");
	
	while(choice)
	{
		printf("\n-----------------------------------------------\n\n");
		
		printf("\n1:: Insert At First\n\n");
		
		printf("\n2:: Insert At Last\n\n");
		
		printf("\n3:: Delete First\n\n");
		
		printf("\n4:: Delete Last\n\n");
	
		printf("\n5:: Insert At Position\n\n");
	
		printf("\n6:: Delete At Position\n\n");
	
		printf("\n7:: Count Elements in Linked List\n\n");
	
		printf("\n8:: Display Elements of Linked List\n\n");
		
		printf("\n0:: EXIT\n\n");
	
		printf("\n-----------------------------------------------\n\n");
	
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
		
				printf("Enter the value\t");
				scanf("%d",&value);
				
				InsertAtFirst(&First,&Last,value);
				break;
			
			case 2:
		
				printf("Enter the value\t");
				scanf("%d",&value);
				
				InsertAtLast(&First,&Last,value);
				break;
		
			case 3:
				
				DeleteFirst(&First, &LastS);
				break;
		
			case 4:
		
				DeleteLast(&First, &LastS);
				break;
				
			case 5:
		
				printf("Enter the Element\t");
				scanf("%d",&value);
				
				printf("Enter the Position\t");
				scanf("%d",&Position);
				
				InsertAtPosition(&First,&Last,value,Position);
				break;
				
				break;
		
			case 6:
		
				printf("Enter the Position\t");
				scanf("%d",&Position);
				
				DeleteAtPosition(&First,&Last,Position);
				break;
				break;
				
			case 7:
				
				Count(First,Last);
				break;
			
			case 8:
			
				Display(First,Last);
				break;
			
			case 0:
				
				exit(0);
				
			default:
				
				printf("Wrong Input");
		}
	}
	
}


int main()
{
	int choice=0;
	
	printf("-----------------------------------------------\n\n");
	
	printf("1:: SINGLY LINKED LIST\n\n");
	
	printf("2:: DOUBLY LINKED LIST\n\n");
	
	printf("3:: SINGLY CIRCULAR LINKED LIST\n\n");
	
	printf("4:: DOUBLY CIRCULAR LINKED LIST\n\n");
	
	printf("-----------------------------------------------\n\n");
	
	scanf("%d",&choice,"\n");
	
	switch(choice)
	{
		case 1:
	
			SinglyLinkedList();
			break;
			
		case 2:
		
			DoublyLinkedList();
			break;
			
		case 3:
		
			SinglyCircularLinkedList();
			break;
			
		case 4:
		
			DoublyCircularLinkedList();
			break;
			
		default:
		
			printf("THANK YOU FOR USING THE APPLICATION");
	}
	
	
}