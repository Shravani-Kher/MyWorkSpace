
//////////////////////////////////////////////////// 
//
//  Function Name:  OffBit.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           29 September 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept one number from user and ON its first 4 bits. Return modified number.*/
 
//Input  :  73 
//Output : 79

//Input  : 1
//Output : 15

#include<stdio.h>

int OffBit(int iValue)
{
	int iResult= 0;
	int iMask= 0x0000000F;
	
	if(iValue<0)
	{
		iValue= -iValue;
	}
	
	iResult=  iValue | iMask;
	
	return iResult;
	
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

