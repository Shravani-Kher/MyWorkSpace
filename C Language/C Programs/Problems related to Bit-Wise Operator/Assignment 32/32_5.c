
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkBit.
//  Parameters:     Integer.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           28 September 2020
//
//////////////////////////////////////////////////// 

/*  Write a program which checks whether first and last bit is On or OFF. 
    First bit means bit number 1 and last bit means bit number 32.  */ 
 
//Input  : 2147483649
//Output : ON
 
//Input  : 987654321
//Output : OFF

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iValue)
{
	int iResult= 0;
	int iMask= 0x80000001;
	
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
		printf("1st and 32nd Bit is ON");
	}
	else
	{
		printf("One of the Bit or All the Bits are OFF");
	}
	
	return 0;
}

