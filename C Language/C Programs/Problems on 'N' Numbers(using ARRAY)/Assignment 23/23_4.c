
//////////////////////////////////////////////////// 
//
//  Function Name:  Display.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 

/* Accept N numbers from user and accept Range, Display all elements from that range*/

//Input :  N :   6 
//Start: 60     
//End :  90     
//Elements : 85 66 3 76 93 88  
//Output : 66 76 88 

//Input :  N :   6 
//Start: 30     
//End :  50     
//Elements : 85 66 3 76 93 88  
//Output :

#include<stdio.h>
#include<stdlib.h>

void Display(int arr[],int iNo,int iStart,int iEnd)
{
	int iCnt= 0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if((arr[iCnt]>iStart)&&(arr[iCnt]<iEnd))
		{
			printf("%d\t",arr[iCnt]);
		}
		
	}
	if((arr[iCnt]<iStart)||(arr[iCnt]>iEnd))
		{
			printf("There Is no Number between the Range");
		}
	
}
int main()
{
	int iValue1= 0;
	int iValue2= 0;
	int iValue3= 0;
	int iCnt= 0;
	int *ptr= NULL;
	
	
	printf("Enter 'N' Number");
	scanf("%d",&iValue1);
	printf("Enter Starting Point of Range");
	scanf("%d",&iValue2);
	printf("Enter Ending Point of Range");
	scanf("%d",&iValue3);
	
	ptr=(int *)malloc(sizeof(int)*iValue1);
	if(ptr==NULL)
	{
		printf("ERROR: Unable to Allocate Memory");
		return -1;
	}
	printf("Enter the Numbers\n");
	for(iCnt=0;iCnt<iValue1;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr,iValue1,iValue2,iValue3);
	
	free(ptr);
	return 0;
}