
//////////////////////////////////////////////////// 
//
//  Function Name:  Display.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
//////////////////////////////////////////////////// 

/*Accept one number from user and print that number of * on screen.*/

#include<stdio.h>

void DisplayStar(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\n");
	}
}
int main()
{
	int iValue= 0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	DisplayStar(iValue);
	
	return 0;
}
