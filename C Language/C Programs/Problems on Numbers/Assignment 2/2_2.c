
//////////////////////////////////////////////////// 
//
//  Function Name:  Print.
//  Parameters:     Integer.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
//////////////////////////////////////////////////// 

/* Accept one number from user and print that number of * on screen. */

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Print(int iNo)
{
	if(iNo<10)
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
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	bRet=Print(iValue);
	
	if(bRet==TRUE)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
	}
	
	return 0;
}