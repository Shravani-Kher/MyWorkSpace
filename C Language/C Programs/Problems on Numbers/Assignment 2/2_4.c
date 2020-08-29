
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkEvenOdd.
//  Parameters:     Integer.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
//////////////////////////////////////////////////// 

/*Accept two numbers from user and display first number in second number of times*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEvenOdd(int iNo)
{
	if(iNo%2==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int iValue= 0;
	BOOL bRet= FALSE;
	
	printf("Enter the Number");
	scanf("%d",&iValue);
	
	bRet=ChkEvenOdd(iValue);
	
	if(bRet==TRUE)
	{
		printf("The Number is Even");
	}
	else
	{
		printf("The Number is Odd");
	}
	
	return 0;
}