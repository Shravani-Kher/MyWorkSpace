
//////////////////////////////////////////////////// 
//
//  Function Name:  ToggleBit.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           29 September 2020
//
//////////////////////////////////////////////////// 

/* Write a program which accept one number from user and toggle 7th and 10th bit of that number. 
 Return modified number.*/
 
//Input  : 137 
//Output : 713 

#include<stdio.h>

int ToggleBit(int iValue)
{
	int iResult= 0;
	int iMask= 0x00000240;
	
	if(iValue<0)
	{
		iValue= -iValue;
	}
	
	iResult=  iValue ^ iMask;
	
	return iResult;
	
}

int main()
{
	int iValue= 0;
	int iRet= 0;
	
	printf("Enter the Number");
	scanf("%d",&iValue);
	
	iRet= ToggleBit(iValue);
	
	printf("The Number is: %d",iRet);
	
	return 0;
}

