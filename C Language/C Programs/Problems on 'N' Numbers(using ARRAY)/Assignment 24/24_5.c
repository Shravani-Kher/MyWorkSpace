
//////////////////////////////////////////////////// 
//
//  Function Name:  Display.
//  Parameters:     Integer, Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 

/* Accept N numbers from user and display summation of digits of each number. */

//Input :  N :   6 
//Elements : 8225  665 3 76 953 858  
//Output : 17 17 3 13 17 21 

#include<stdio.h>
#include<stdlib.h>

void Display(int arr[],int iNo)
{
	int iCnt= 0;
	int iDigit= 0;
	int iAns= 0;
	
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		iAns=0;
		while(arr[iCnt]!=0)
		{
			iDigit=arr[iCnt]%10;
			iAns= iAns+iDigit;
			arr[iCnt]= arr[iCnt]/10;
		}
		printf("%d\t",iAns);
	}
}
int main()
{
	int iValue1= 0;
	int iCnt= 0;
	int *ptr= NULL;
	
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
	
	Display(ptr,iValue1);
	
	free(ptr);
	return 0;
}