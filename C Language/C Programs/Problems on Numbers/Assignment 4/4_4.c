

//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayMul.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
////////////////////////////////////////////////////

/*Write a program which accept number from user and return summation of all its non factors. */

//Input  :  12 
//Output :  50 
 
//Input  :  10  
//Output :  37

#include<stdio.h>

void DisplayMul(int iNo)
{
	int iCnt= 0;
	int iAns= 0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo%iCnt!=0)
		{
			iAns= iAns+iCnt;
		}
	}
	printf("%d",iAns);
}
int main()
{
	int iValue= 0;
	
	printf("Enter the Number");
	scanf("%d",&iValue);
	
	DisplayMul(iValue);
	
	return 0;
}