
//////////////////////////////////////////////////// 
//
//  Function Name:  Frequency.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 

/*Accept N numbers from user and return frequency of even numbers.*/
 
//Input :  N :   6 
//Elements : 85 66 3 80 93 88  
//Output : 3   

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iNo)
{
	int iSum= 0;
	int iCnt= 0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]%2==0)
		{
			iSum++;                     
		}
	}
	
	return iSum;
	
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
	
	iRet= Frequency(ptr,iValue);
	
	printf("The Frequency is: %d",iRet);
	
	return 0;
}