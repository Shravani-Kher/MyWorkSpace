
//////////////////////////////////////////////////// 
//
//  Function Name:  ToggleNibble.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           29 September 2020
//
//////////////////////////////////////////////////// 

 /*Write a program which accept one number from user and toggle contents of first and last nibble of the number. 
 Return modified number. (Nibble is a group of four bits)*/ 

#include<stdio.h>

int ToggleNibble(int iNo)
{
	int iMask= 0;
	int iResult= 0;
	
	iMask= 0xF000000F;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}                 
    
	iResult= iMask ^ iNo;
	
	return iResult;
	
}

int main()
{
	int iNo= 0;
	int iRet= 0;
	
	printf("Enter the Number");
	scanf("%d",&iNo);
	
	iRet= ToggleNibble(iNo);
	
	printf("The Number is : %d",iRet);
	
	return 0;
}
