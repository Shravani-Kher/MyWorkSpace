
//////////////////////////////////////////////////// 
//
//  Function Name:  OffBit.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           28 September 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept one number from user and off 7th bit of that number 
if it is on. Return modified number.*/
 
//Input  : 79 
//Output : 15

#include<stdio.h>

int OffBit(int iValue)
{
	int iResult= 0;
	int iMask= 0x00000040;
	
	if(iValue<0)
	{
		iValue= -iValue;
	}
	
	iMask= ~iMask;
	
	iResult= iValue & iMask;
	
}

int main()
{
	int iValue= 0;
	int iRet= 0;
	
	printf("Enter the Number");
	scanf("%d",&iValue);
	
	iRet= OffBit(iValue);
	
	printf("The Number is: %d",iRet);
	
	return 0;
}

