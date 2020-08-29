
//////////////////////////////////////////////////// 
//
//  Function Name:  Difference.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 

/*Accept N numbers from user and return difference between frequency of even number and odd numbers.*/
 
//Input :  N :   7 
//Elements : 85 66 3 80 93 88 90 
//Output : 1 (4 -3)   

#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[], int iNo)
{
	int iSum= 0;
	int iCnt= 0;
	int iDiff= 0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]%2==0)
		{
			iSum++;                     
		}
		else
		{
			iDiff++;
		}
	}
	
	return iSum-iDiff;
	
}
int main()
{
	int iValue= 0;
	int iRet=0;
	int iCnt= 0;
	int *ptr= NULL;
	
	printf("Enter the 'N' Number");
	scanf("%d",&iValue);
	
	if(iValue==0)
	{
		printf("ERROR: Invalid Input");
	}
	
	ptr=(int*)malloc(sizeof(int)*iValue);
	if(ptr == NULL)
    {
        printf("Error : Unable to allocate memory\n");
        return -1;
    }
	
	printf("Enter the Numbers\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet= Difference(ptr,iValue);
	
	printf("The Difference is: %d",iRet);
	
	return 0;
}