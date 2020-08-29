
//////////////////////////////////////////////////// 
//
//  Function Name:  Divisibility.
//  Parameters:     Integer.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
//////////////////////////////////////////////////// 

/*Accept one number and check whether is is divisible by 5 or not.*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Divisibility(int iNo)
{
	if((iNo%5)==0)
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
	
	bRet =Divisibility(iValue);
	
	if(bRet==TRUE)
	{
		printf("The Number is Divisible");
	}
	else
	{
		printf("The Number is Not Divisible");
	}
	return 0;
}