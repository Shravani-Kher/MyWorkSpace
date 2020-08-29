
//////////////////////////////////////////////////// 
//
//  Function Name:  Check.
//  Parameters:     Integer, Integer.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 
 
/*Accept N numbers from user check whether that numbers contains 11 in it or not.*/
 
//Input :  N :   6 
//Elements : 85 66 11 80 93 88  
//Output : 11 is present 

//Input :  N :   6 
//Elements : 85 66 3 80 93 88  
//Output : 11 is absent   
 
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int arr[], int iNo)
{
	int iCnt= 0;
	
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]==11)
		{
			return TRUE;                    
		}
		
	}
	
	return FALSE;
}
int main()
{
	int iValue= 0;
	int iRet=0;
	int iCnt= 0;
	int *ptr= NULL;
	
	printf("Enter the 'N' Number");
	scanf("%d",&iValue);
	
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
	
	iRet= Check(ptr,iValue);
	
	if(iRet==TRUE)
	{
		printf("11 is Present");
	}
	else
	{
		printf("11 Not Present");
	}
	return 0;
}