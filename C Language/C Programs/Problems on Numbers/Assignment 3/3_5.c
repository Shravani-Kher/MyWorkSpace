
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkVowel.
//  Parameters:     Character.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
//////////////////////////////////////////////////// 

/* Accept on character from user and check whether that character is vowel  (a,e,i,o,u) or not. */ 

//Input  : E
   
//Output : TRUE  

//Input  : d   

//Output : FALSE  

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int ChkVowel(char sh)
{
	if((sh=='a')||(sh=='A')||(sh=='e')||(sh=='E')||(sh=='i')||(sh=='I')||(sh=='o')||(sh=='O')||(sh=='u')||(sh=='U'))
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
	char ch= '\0';
	int iRet= 0;
	
	printf("Enter one Character");
	scanf("%c",&ch);
	
	iRet=ChkVowel(ch);
	
	if(iRet==TRUE)
	{
		printf("It is Vowel");
	}
	else
	{
		printf("Its not Vowel");
	}
	
	return 0;
}