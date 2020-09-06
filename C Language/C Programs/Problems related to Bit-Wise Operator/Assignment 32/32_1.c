
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkBit.
//  Parameters:     Integer.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           28 September 2020
//
//////////////////////////////////////////////////// 

/*Write a program which checks whether 15th bit is On or OFF. */

//Input  : 16384
//Output : ONN

//Input  : 1234
//Output : OFF

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iValue)
{
	int iResult= 0;
	int iMask= 0x00004000;
	
	if(iValue<0)
	{
		iValue= -iValue;
	}
	
	iResult= iValue&iMask;
	
	if(iResult==iMask)
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
	
	bRet= ChkBit(iValue);
	
	if(bRet==TRUE)
	{
		printf("15th Bit is ON");
	}
	else
	{
		printf("15th Bit is OFF");
	}
	
	return 0;
}

