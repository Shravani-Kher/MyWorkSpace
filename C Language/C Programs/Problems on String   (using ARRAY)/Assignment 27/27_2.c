
//////////////////////////////////////////////////// 
//
//  Function Name:  CountSmall.
//  Parameters:     String.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           25 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept string from user and count number of small characters.*/ 

//Input  :   “Marvellous” 
//Output :   9
 
#include<stdio.h>


int CountSmall(char ch[])
{
	int iCnt= 0;
	int i= 0;
	
	while(ch[i]!='\0')
	{
		if((ch[i]>='a')&&(ch[i]<='z'))
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
	
	
	iRet=CountSmall(ch);
	
	printf("Number of Small Letters are: %d",iRet);
	
	return 0;
}