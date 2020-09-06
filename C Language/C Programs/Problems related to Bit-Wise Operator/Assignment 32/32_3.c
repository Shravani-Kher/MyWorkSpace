
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkBit.
//  Parameters:     Integer.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           28 September 2020
//
//////////////////////////////////////////////////// 

/*Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF.*/ 
 
//Input  : 135282752
//Output : ON
 
//Input  : 1234567
//Output : OFF

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iValue)
{
	int iResult= 0;
	int iMask= 0x08104040;
	
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
		printf("7th &15th &21st,28th Bit is ON");
	}
	else
	{
		printf("One of the Bit or All the Bits are OFF");
	}
	
	return 0;
}

