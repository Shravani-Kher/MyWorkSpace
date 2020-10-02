
//////////////////////////////////////////////////// 
//
//  Function Name:  WhiteSpace, WhiteSpaceR.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           25 September 2020
//
////////////////////////////////////////////////////

/*Write a recursive program which accept string from user and count white spaces.*/
 
//Input : HE llo WOr lD 

//Output : 3 

#include<stdio.h>

/*------NORMAL APPROACH------*/

int WhiteSpace(char Str[])
{
	int i= 0;
	int iCnt= 0;
	
	while(Str[i]!='\0')
	{
		if(Str[i]==' ')
		{
			iCnt++;
		}
		i++;
	}
	
	return iCnt;
	
}

/*------RECURSIVE APPROACH------*/

int WhiteSpaceR(char Str[])
{
	static int i= 0;
	static int iCnt= 0;
	
	if(Str[i]!='\0')
	{
		if(Str[i]==' ')
		{
			iCnt++;
		}
		i++;
		WhiteSpaceR(Str);
	}
	
	return iCnt;
}

int main()
{
	char Str[20]={'\0'};
	int iRet= 0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",&Str);
	
	iRet= WhiteSpace(Str);
	
	printf("/*------NORMAL APPROACH------*/\n");
	printf("Number of WhiteSpaces are  %d\n",iRet);
	
	iRet= WhiteSpaceR(Str);
	
	printf("/*------RECURSIVE APPROACH------*/\n");
	printf("Number of WhiteSpaces are %d\n",iRet);
	
	return 0;
}