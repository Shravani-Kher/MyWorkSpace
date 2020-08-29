
//////////////////////////////////////////////////// 
//
//  Function Name:  ReverseOrder.
//  Parameters:     String.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           25 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept string from user and display it inn reverse order. */

//Input :   “MarvellouS” 
//Output :   “SuollevraM” 

#include<stdio.h>

void ReverseOrder(char ch[])
{
	int iCnt= 0;
	int iCount= 0;
	int i= 0;
	
	while(ch[i]!='\0')
	{
		iCnt++;
		i++;
	}
	
	for(iCount=iCnt;iCount>=0;iCount--)
	{
		printf("%c",ch[iCount]);
	}

}


int main()
{
	char ch[50];
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&ch);
	
	ReverseOrder(ch);
	
	return 0;
}