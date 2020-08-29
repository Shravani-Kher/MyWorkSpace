
//////////////////////////////////////////////////// 
//
//  Function Name:  ConvertUpper.
//  Parameters:     String.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           25 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept string from user and convert it into upper case. */

//Input  :   “Marvellous Multi OS” 
//Output :   MARVELLOUS MULTI OS 
 

#include<stdio.h>

void ConvertUpper(char ch[])
{
	int iCnt= 0;
	int iCount= 0;
	int i= 0;
	
	while(ch[i]!='\0')
	{
		if((ch[i]>='a')&&(ch[i]<='z'))
		{
			ch[i]=ch[i]-32;
		}
		i++;
	}
	
	printf("%s",ch);
	

}


int main()
{
	char ch[50];
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&ch);
	
	ConvertUpper(ch);
	
	return 0;
}