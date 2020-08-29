
//////////////////////////////////////////////////// 
//
//  Function Name:  Frequency.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 

/* Accept N numbers from user and accept one another number as NO , return frequency of NO form it.*/ 
                                             ! 
//Input :  N :   6 
//NO:  66 
//Elements : 85 66 3 66 93 88  
//Output : 2 

//Input :  N :   6 
//NO:  12 
//Elements : 85 11 3 15 11 111  
//Output : 0   

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iNo1, int iNo2)
{
	int iAns= 0;
	int iCnt= 0;
	
	
	for(iCnt=0;iCnt<iNo1;iCnt++)
	{
		if(arr[iCnt]<0)
		{
			arr[iCnt]=-arr[iCnt];
		}
		if(arr[iCnt]==iNo2)
		{
		    iAns++;
		}
		
		
	}
	return iAns;
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
	
	iRet= Frequency(ptr,iValue1,iValue2);
	
	printf("Frequency of Number is: %d",iRet);
	
	free(ptr);
	
	return 0;
}