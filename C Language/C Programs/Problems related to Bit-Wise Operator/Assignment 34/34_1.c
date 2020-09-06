
//////////////////////////////////////////////////// 
//
//  Function Name:  CheckBit.
//  Parameters:     Integer, Integer.
//  Return Value:   BOOL.
//  Author:         Shravani Vinod Kher
//  Date:           29 September 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept one number and position from user and check whether bit at 
  that position is on or off. If bit is one return TURE otherwise return FALSE.*/
  
//Input    :  10 
//Position :  2 
//Output   :  TRUE   

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iValue, int iPos)
{
	int iResult= 0;
	int iMask= 0x00000001;
	
	if(iValue<0)
	{
		iValue= -iValue;
	}

	iMask= iMask<<(iPos-1);
	
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
	int iPos= 0;
	BOOL bRet= 0;
	
	printf("Enter the Number");
	scanf("%d",&iValue);
	
	printf("Enter the Position");
	scanf("%d",&iPos);
	
	bRet= CheckBit(iValue,iPos);
	
	if(bRet==TRUE)
	{
		printf("Bit is ON");
	}
	else
	{
		printf("Bit is OFF");
	}
	
	return 0;
}

