
//////////////////////////////////////////////////// 
//
//  Function Name:  OddNumber.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/* Write a program which accept N and print first 5 multiples of N. */

//Input  :  4  
//Output :  4  8  12  16  20 

#include<stdio.h>

void OddNumber(int iNo)
{
	int iCnt= 0;
	int iAns= 0;
	
	for(iCnt=1;iCnt<=5;iCnt++)
	{
		iAns= iNo*iCnt;
		printf("%d\t",iAns);
	}
	
}
int main()
{
	int iValue= 0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	OddNumber(iValue);
	
	return 0;
}