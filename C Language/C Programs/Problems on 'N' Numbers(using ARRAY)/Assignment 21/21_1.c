
//////////////////////////////////////////////////// 
//
//  Function Name:  Difference.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 

/*Accept N numbers from user and return difference between summation of even elements and summation of odd elements.*/
 
//Input :  N :   6 
//Elements : 85 66 3 80 93 88  
//Output : 53 (234 - 181) 

#include<stdio.h>
#include<stdlib.>

int Difference(int arr[], int iNo)
{
	int iSum= 0;
	int iDiff= 0;
	int iCnt= 0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]%2==0)
		{
			iSum=iSum+arr[iCnt];                     
		}
		else
		{
			iDiff= iDiff+arr[iCnt];
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