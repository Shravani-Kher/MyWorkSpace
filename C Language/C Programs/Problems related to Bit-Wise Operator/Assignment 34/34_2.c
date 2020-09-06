
//////////////////////////////////////////////////// 
//
//  Function Name:  OffBit.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           29 September 2020
//
//////////////////////////////////////////////////// 

/* Write a program which accept one number and position from user and off that bit.
 Return modified number. */
 
//Input    :  10 
//Position :  2 
//Output   :  8   

#include<stdio.h>

int OffBit(int iNo, int iPos)
{
	int iMask= 0;
	int iResult= 0;
	
	iMask= 0x00000001;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	iMask= ~iMask;
	
	iMask= iMask<<(iPos-1);
	
	iResult= iMask & iNo;
	
	return iResult;
	
	
}

int main()
{
	int iNo= 0;
	int iPos= 0;
	int iRet= 0;
	
	printf("Enter the Number");
	scanf("%d",&iNo);
	
	printf("Enter the Position");
	scanf("%d",&iPos);
	
	iRet= OffBit(iNo,iPos);
	
	printf("The Number is : %d",iRet);
	
	return 0;
}
