
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkWeather.
//  Parameters:     Integer, Integer.
//  Return Value:   Boolean.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 

/* Accept N numbers from user and accept one another number as NO , check whether NO is present or not.*/

//Input :  N :   6 
//NO:  66 
//Elements : 85 66 3 66 93 88  
//Output : TRUE 

//Input :  N :   6 
//NO:  12 
//Elements : 85 11 3 15 11 111  
//Output : FALSE 

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkWeather(int arr[], int iNo1, int iNo2)
{
	int iAns= 0;
	int iCnt= 0;
	
	
	for(iCnt=0;iCnt<iNo1;iCnt++)
	{
		if(arr[iCnt]==iNo2)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
	
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
	
	iRet= ChkWeather(ptr,iValue1,iValue2);
	
	if(iRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	
	free(ptr);
	
	return 0;
}