 
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayMul.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept number from user and display its multiplication of factors. */

//Input  : 12 
//Output : 144   (1 * 2 * 3 * 4 * 6) 

//Input  : 13 
//Output : 1     (1) 

//Input  : 10   
//Output : 10    (1 * 2 * 5)

#include<stdio.h>

void DisplayMul(int iNo)
{
	int iCnt= 0;
	int iAns= 1;
	                // 10
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iAns= iAns*iCnt;
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