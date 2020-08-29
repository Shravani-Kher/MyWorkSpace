 
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayMul.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
////////////////////////////////////////////////////

/*Write a program which accept number from user and display its factors in decreasing order. */

//Input  :  12 
//Output :  6 4 3 2 1 
                                              
//Input  :  13 
//Output :  1  

//Input  :  10  
//Output :  5 2 1 
 
#include<stdio.h>

void DisplayMul(int iNo)
{
	int iCnt= 0;
	                // 10
	for(iCnt=iNo/2;iCnt>=1;iCnt--)
	{
		if(iNo%iCnt==0)
		{
			printf("%d",iCnt);
		}
	}
}
int main()
{
	int iValue= 0;
	
	printf("Enter the Number");
	scanf("%d",&iValue);
	
	DisplayMul(iValue);
	
	return 0;
}