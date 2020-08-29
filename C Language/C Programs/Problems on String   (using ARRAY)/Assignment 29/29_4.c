
//////////////////////////////////////////////////// 
//
//  Function Name:  LastOcc.
//  Parameters:     String, Character.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           27 August 2020
//
////////////////////////////////////////////////////

/*Write a program which accept string from user and accept one character. 
Return index of last occurrence of that character.*/

//Input :   “Marvellous Multi OS”    M 
//Output :   11 

//Input :   “Marvellous Multi OS”    W 
//Output :   -1 

//Input :   “Marvellous Multi OS”    e 
//Output :   4 

#include<stdio.h>

int LastOcc(char ch[], char cValue)
{
	int iCnt= -1;
	int i= 0;
	
	while(ch[i]!='\0')   
	{
		if(ch[i]==cValue)
		{
			iCnt= i;
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
	
	iRet=LastOcc(ch,cValue);
	
	printf("%d",iRet);
	
	return 0;
}