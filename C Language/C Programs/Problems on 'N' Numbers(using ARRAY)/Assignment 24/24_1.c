
//////////////////////////////////////////////////// 
//
//  Function Name:  Largest.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
////////////////////////////////////////////////////

/*Accept N numbers from user and return the largest number.*/

//Input :  N :   6 
//Elements : 85 66 3 66 93 88  
//Output : 93  

#include<stdio.h>
#include<stdlib.h>

int Largest(int arr[],int iNo)
{
	int iCnt= 0;
	int iAns= 1;
	 
	 iAns=arr[0];
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]>iAns)
		{
			iAns=arr[iCnt];
		}
	}
	return iAns;
}
int main()
{
	int iValue1= 0;
	int iCnt= 0;
	int *ptr= NULL;
	int iRet= 0;
	
	
	printf("Enter 'N' Number");
	scanf("%d",&iValue1);
	
	if(iValue1==0)
	{
		printf("ERROR: Invalid Input");
	}
	
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
	
	iRet=Largest(ptr,iValue1);
	
	printf("The Largest Number is: %d",iRet);
	
	free(ptr);
	return 0;
}