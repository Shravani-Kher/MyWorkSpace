 
//////////////////////////////////////////////////// 
//
//  Function Name:  CountWhiteSpace.
//  Parameters:     String.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           25 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept string from user and count number of white spaces */

//Input :   “MarvellouS” 
//Output :   0 

//Input :   “MarvellouS Infosystems” 
//Output :   1 

//Input :   “MarvellouS Infosystems by Piyush Manohar Khairnnar” 
//Output :   5 

#include<stdio.h>

void CountWhiteSpace(char ch[])
{
	int iCnt= 0;
	int i= 0;
	
	while(ch[i]!='\0')   
	{
		if((ch[i]>='A')&&(ch[i]<='Z')||(ch[i]>='a')&&(ch[i]<='z'))
		{
			printf("");
		}
		else
		{
			iCnt++;
		}
		i++;
	}
	
	printf("%d",iCnt);
}


int main()
{
	char ch[50];
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&ch);
	
	CountWhiteSpace(ch);
	
	return 0;
}