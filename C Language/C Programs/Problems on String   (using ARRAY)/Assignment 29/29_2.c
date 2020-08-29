
//////////////////////////////////////////////////// 
//
//  Function Name:  CheckChar.
//  Parameters:     String, Character.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           25 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept string from user and accept one character. Return frequency of that character.*/
 
//Input :   “Marvellous Multi OS”    M 
//Output :   2 

//Input :   “Marvellous Multi OS”    W 
//Output :   0  

#include<stdio.h>

int CheckChar(char ch[], char cValue)
{
	int iCnt= 0;
	int i= 0;
	
	while(ch[i]!='\0')   
	{
		if(ch[i]==cValue)
		{
			iCnt++;
		}
	i++;
	}
	return iCnt;
}


int main()
{
	char ch[50];
	char cValue= '\0';
	int iRet= 0;
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&ch);
	
	printf("Enter the Character ");
	scanf(" %c",&cValue);
	
	iRet=CheckChar(ch,cValue);
	
	printf("%d",iRet);
	
	return 0;
}