
//////////////////////////////////////////////////// 
//
//  Function Name:  DifferenceinFrequency.
//  Parameters:     String.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           25 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept string from user and return difference between frequency of small 
characters and frequency of capital characters.*/ 

//Input  :   “MarvellouS” 
//Output :   6 (8-2) 
 

#include<stdio.h>


int DifferenceinFrequency(char ch[])
{
	int iCnt= 0;
	int i= 0;
	int iCount= 0;
	
	while(ch[i]!='\0')
	{
		if((ch[i]>='a')&&(ch[i]<='z'))
		{
			iCnt++;
			
		}
		
		if((ch[i]>='A')&&(ch[i])<='Z')
		{
			iCount++;
		}
		
		i++;
	}
	
	return iCnt-iCount;
	
}

int main()
{
	char ch[50];
	int iRet= 0;
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&ch);
	
	
	iRet=DifferenceinFrequency(ch);
	
	printf("The Difference Between Frequency of Small and Capital is: %d",iRet);
	
	return 0;
}