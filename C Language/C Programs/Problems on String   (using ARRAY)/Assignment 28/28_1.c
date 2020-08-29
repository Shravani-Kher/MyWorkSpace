
//////////////////////////////////////////////////// 
//
//  Function Name:  ConvertLower.
//  Parameters:     String.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           25 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept string from user and convert it into lower case.*/
 
//Input  :   “Marvellous Multi OS” 
//Output :   marvellous multi os 
 

#include<stdio.h>

void ConvertLower(char ch[])
{
	int iCnt= 0;
	int iCount= 0;
	int i= 0;
	
	while(ch[i]!='\0')
	{
		if((ch[i]>='A')&&(ch[i]<='Z'))
		{
			ch[i]=ch[i]+32;
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
	
	ConvertLower(ch);
	
	return 0;
}