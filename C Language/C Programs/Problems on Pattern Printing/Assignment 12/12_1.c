
//////////////////////////////////////////////////// 
//
//  Function Name:  PrintPattern.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           10 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept number from user and display below pattern.*/ 

//Input  :  5  
//Output :  * * * * * # # # # #   

//Input  :  6 
//Output :  * * * * * * # # # # # # #   

//Input  :  -5  
//Output :  * * * * * # # # # #   

//Input  :  2 
//Output :  * * # # 

#include<stdio.h>


void PrintPattern(int iNo)
{
	int iCnt= 0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\t");
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("#\t");
	}
	
}
int main()
{
	int iValue= 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	PrintPattern(iValue);
	
	return 0;
}