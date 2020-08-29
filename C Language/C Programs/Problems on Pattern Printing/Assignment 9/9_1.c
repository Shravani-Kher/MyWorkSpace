
//////////////////////////////////////////////////// 
//
//  Function Name:  Print.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept number from user and print that number of $ & * on screen. */ 

//Input  :  5 
//Output :  $ * $ * $ * $ * $ * 

//Input  :  3 
//Output :  $ * $ * $ * 

//Input  :  -3 
//Output :  $ * $ * $ *

#include<stdio.h>

void Print(int iNo)
{
	int iCnt= 0;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("$\t");
		printf("*\t");
	}
}
int main()
{
	int iValue= 0;
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	Print(iValue);
	
	return 0;
}