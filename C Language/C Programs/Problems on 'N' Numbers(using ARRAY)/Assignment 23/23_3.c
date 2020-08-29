
//////////////////////////////////////////////////// 
//
//  Function Name:  LastOccr.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 

/*Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO.*/

//Input :  N :   6 
//NO:  66 
//Elements : 85 66 3 66 93 88  
//Output : 3 

//Input :  N :   6 
//NO:  93 
//Elements : 85 66 3 66 93 88  
//Output : 4 

//Input :  N :   6 
//NO:  12 
//Elements : 85 11 3 15 11 111  
//Output : -1   

#include<stdio.h>
#include<stdlib.h>

int LastOccr(int arr[], int iNo1, int iNo2)
{
	int iAns= 0;
	int iCnt= 0;
	
	
	for(iCnt=iNo1-1;iCnt>=0;iCnt--) 
	{
		if(arr[iCnt]==iNo2)
		{
			return iCnt;
		}
	}
	
	return -1;
}
int main()
{
	int iValue1= 0;
	int iValue2= 0;
	int *ptr= NULL;
	int iRet= 0;
	int iCnt= 0;
	
	printf("Enter 'N' Number");
	scanf("%d",&iValue1);
	printf("Enter the Number to Search");
	scanf("%d",&iValue2);
	
	if(iValue1==0)
	{
		printf("ERROR: Invalid Input");
	}
	
	ptr=(int *)malloc(sizeof(int)*iValue1);
	if(ptr==NULL)
	{
		printf("ERROR: Unable to allocate Memory");
		return -1;
	}
	
	printf("Enter the Numbers\n");
	for(iCnt=0;iCnt<iValue1;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet= LastOccr(ptr,iValue1,iValue2);
	
	printf("The Index is%d",iRet);
	
	
	free(ptr);
	
	return 0;
}