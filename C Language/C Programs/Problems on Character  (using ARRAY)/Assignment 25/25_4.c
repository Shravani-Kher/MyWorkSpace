
//////////////////////////////////////////////////// 
//
//  Function Name:  CheckCharacter.
//  Parameters:     Character.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           22 August 2020
//
//////////////////////////////////////////////////// 

/*Accept Character from user and check whether it is small case or not (a-z).*/ 

//Input  :  g 
//Output :  TRUE 

//Input  :  D 
//Output :  FALSE 

#include<stdio.h>
typedef int BOOLEAN;
#define TRUE 1
#define FALSE 0 

BOOLEAN CheckCharacter(char cValue)
{
	
	
	if((cValue>=97)&&(cValue<=122))
	{
		return TRUE;
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
		printf("It's Digit");
	}
	else
	{
		printf("It's Not Digit");
	}
	
	return 0;
}