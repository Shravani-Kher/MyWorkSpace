
//////////////////////////////////////////////////// 
//
//  Function Name:  CheckChar.
//  Parameters:     String, Character.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           25 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept string from user and accept one character. 
Check whether that character is present in string or not.*/ 

//Input :   “Marvellous Multi OS”    e 
//Output :   TRUE 

//Input :   “Marvellous Multi OS”    W 
//Output :   FALSE 

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckChar(char ch[], char cValue)
{
	int iCnt= 0;
	int i= 0;
	
	while(ch[i]!='\0')   
	{
		if(ch[i]==cValue)
		{
			return TRUE;
		}
	i++;
	}
	
	return FALSE;
}


int main()
{
	char ch[50];
	char cValue= '\0';
	BOOL bRet= FALSE;
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&ch);
	
	printf("Enter the Character ");
	scanf(" %c",&cValue);
	
	bRet=CheckChar(ch,cValue);
	
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