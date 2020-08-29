
//////////////////////////////////////////////////// 
//
//  Function Name:  CountCapital.
//  Parameters:     String.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           25 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept string from user and count number of capital characters.*/ 

//Input  :   “Marvellous Multi OS” 
//Output :   4 

#include<stdio.h>


int CountCapital(char ch[])
{
	int iCnt= 0;
	int i= 0;
	
	while(ch[i]!='\0')
	{
		if((ch[i]>='A')&&(ch[i]<='Z'))
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
	int iRet= 0;
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&ch);
	
	
	iRet=CountCapital(ch);
	
	printf("Number of Capital Letters are: %d",iRet);
	
	return 0;
}