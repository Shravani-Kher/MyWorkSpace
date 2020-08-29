 
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayASCIITable.
//  Parameters:     Character.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           22 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which displays ASCII table. Table contains symbol, Decimal, 
 Hexadecimal and Octal representation of every member from 0 to 255.*/ 
 
 

#include<stdio.h>
typedef int BOOLEAN;
#define TRUE 1
#define FALSE 0 

BOOLEAN CheckCharacter(char cValue)
{
	int iCnt= 0;
	int ch=cValue;
	
	//printf("The Value is%d",ch);
	
	if((ch>=48)&&(ch<=57))
	{
		return TRUE;
	}
	
	return FALSE;

}

int main()
{
	char cValue= '\0';
	
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