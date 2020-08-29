
//////////////////////////////////////////////////// 
//
//  Function Name:  CheckCharacter.
//  Parameters:     Character.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           22 August 2020
//
//////////////////////////////////////////////////// 

/* Accept Character from user and check whether it is capital or not (A-Z).*/ 

//Input  :  F 
//Output :  TRUE 

//Input  :  d 
//Output :  FALSE 

#include<stdio.h>
typedef int BOOLEAN;
#define TRUE 1
#define FALSE 0 

BOOLEAN CheckCharacter(char cValue)
{
	int iCnt= 0;

	for(iCnt=65;iCnt<=90;iCnt++)
	{
		if(cValue==iCnt)
		{
			return TRUE;
		}
	}
		
	return FALSE;

}

int main()
{
	char cValue= '\0';
	BOOLEAN bRet= FALSE;
	
	printf("Enter One Character\t");
	scanf("%c",&cValue);
	
	bRet= CheckCharacter(cValue);
	
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