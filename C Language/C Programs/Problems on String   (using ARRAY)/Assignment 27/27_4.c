  
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkVowel.
//  Parameters:     String.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           25 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept string from user and check whether it contains vowels in it or not.*/ 

//Input :   “marvellous” 
//Output :   TRUE 

//Input :   “Demo” 
//Output :   TRUE 

//Input :   “xyz” 
//Output :   FALSE 

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch[])
{
	int iCnt= 0;
	int i= 0;
	int iCount= 0;
	
	while(ch[i]!='\0')
	{
		if((ch[i]=='a')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u'))
		{
			return TRUE;
		}
		
		if((ch[i]=='A')||(ch[i]=='E')||(ch[i]=='I')||(ch[i]=='O')||(ch[i]=='U'))
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
	BOOL bRet= 0;
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&ch);
	
	
	bRet=ChkVowel(ch);
	
    if(bRet==TRUE)
	{
		printf("It Contains Vowels");
	}
	else
	{
		printf("It dose not Contains Vowels");
	}
	
	return 0;
}