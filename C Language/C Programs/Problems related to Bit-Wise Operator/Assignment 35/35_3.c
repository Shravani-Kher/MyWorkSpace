
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkON.
//  Parameters:     Integer.
//  Return Value:   BOOL.
//  Author:         Shravani Vinod Kher
//  Date:           29 September 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept one number from user and check whether 9th or 12th bit is on or off.*/ 

//Input  :  257  
//Output :  TRUE 

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkON(int iNo)
{
	int i= 1;
	int iResult1= 0;
	int iResult2= 0;
	
	int iMask1= 0x00000100;
	int iMask2= 0x00000800;
	
	iResult1= iNo & iMask1;
	
	iResult2= iNo & iMask2;
	
	if((iMask1==iResult1)||(iMask2==iResult2))
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
	int iNo= 0;
	BOOL bRet= FALSE;
	
	printf("Enter the Number");
	scanf("%d",&iNo);
	
	bRet=ChkON(iNo);
	
	if(bRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	return 0;
}
