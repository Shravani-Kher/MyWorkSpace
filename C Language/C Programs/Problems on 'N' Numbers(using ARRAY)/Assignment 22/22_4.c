
//////////////////////////////////////////////////// 
//
//  Function Name:  Frequency.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 

/*Accept N numbers from user and return frequency of 11 form it.*/

//Input :  N :   6 
//Elements : 85 66 3 15 93 88  
//Output : 0 

//Input :  N :   6 
//Elements : 85 11 3 15 11 111  
//Output : 2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iNo)
{
	int iAns= 0;
	int iCnt= 0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]<0)
		{
			arr[iCnt]=-arr[iCnt];
		}
		if(arr[iCnt]==11)
		{
		    iAns++;
		}
		
		
	}
	return iAns;
}
int main()
{
	int iValue= 0;
	int *ptr= NULL;
	int iRet= 0;
	int iCnt= 0;
	
	printf("Enter 'N' Number");
	scanf("%d",&iValue);
	
	if(iValue==0)
	{
		printf("ERROR: Invalid Input");
	}
	
	ptr=(int *)malloc(sizeof(int)*iValue);
	if(ptr==NULL)
	{
		printf("ERROR: Unable to allocate Memory");
		return -1;
	}
	
	printf("Enter the Numbers\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet= Frequency(ptr,iValue);
	
	printf("Frequency of 11 is: %d",iRet);
	
	free(ptr);
	
	return 0;
}