
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkSymbol.
//  Parameters:     Character.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           22 August 2020
//
//////////////////////////////////////////////////// 

/*Accept Character from user and check whether it is special symbol or not 
(!, @, #, $, %, ^, &, *).*/ 
 
//Input  :  % 
//Output :  TRUE 

//Input  :  d 
//Output :  FALSE 

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkSymbol(char cValue)
{
	
	if((cValue>=33)&&(cValue<=47))
	{
		return TRUE;
	}
	
	return FALSE;
	
}

int main()
{
	char cValue= '\0';
	BOOL bRet= FALSE;
	
	printf("Enter One Character\t");
	scanf("%c",&cValue);
	
	bRet=ChkSymbol(cValue);
	
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