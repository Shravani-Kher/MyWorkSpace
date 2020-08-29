
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayDigit.
//  Parameters:     String.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           25 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept string from user and display only digits from that string. */

//Input :   “marve89llous121” 
//Output :   89121 

//Input :   “Demo” 
//Output :  

#include<stdio.h>

void DisplayDigit(char ch[])
{
	int iCnt= 0;
	int i= 0;
	
	while(ch[i]!='\0')   
	{
		if((ch[i]>='0')&&(ch[i]<='9'))
		{
			printf("%c",ch[i]);
		}
		i++;
	}
}


int main()
{
	char ch[50];
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&ch);
	
	DisplayDigit(ch);
	
	return 0;
}