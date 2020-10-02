
//////////////////////////////////////////////////// 
//
//  Function Name:  Count, CountR.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           25 September 2020
//
////////////////////////////////////////////////////

/*Write a recursive program which accept string from user and count number of characters.*/
 
//Input : Hello 

//Output : 5  

#include<stdio.h>

/*------NORMAL APPROACH------*/

int Count(char Str[])
{
	int i= 0;
	
	while(Str[i]!='\0')
	{
		i++;
	}
	
	return i;
}

/*------RECURSIVE APPROACH------*/

int CountR(char Str[])
{
	static int i= 0;
	
	if(Str[i]!='\0')
	{
		i++;
		CountR(Str);
	}
	
	return i;
}

int main()
{
	char Str[20]= {'\0'};
	int iRet= 0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",&Str);
	
	iRet= Count(Str);
	
	printf("/*------NORMAL APPROACH------*/\n");
	printf("The Length of string is: %d\n",iRet);
	
	iRet= CountR(Str);
	
	printf("/*------RECURSIVE APPROACH------*/\n");
	printf("The Length of string is: %d\n",iRet);
	
	return 0;
}