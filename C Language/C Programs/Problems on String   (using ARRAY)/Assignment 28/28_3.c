
//////////////////////////////////////////////////// 
//
//  Function Name:  ToggleCase.
//  Parameters:     String.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           25 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept string from user and toggle the case.*/ 

//Input :   “Marvellous Multi OS” 
//Output :   mARVELLOUS mULTI os 
 

#include<stdio.h>

void ToggleCase(char ch[])
{
	int iCnt= 0;
	int i= 0;
	
	while(ch[i]!='\0')   
	{
		if((ch[i]>='A')&&(ch[i]<='Z'))
		{
			ch[i]=ch[i]+32;
		}
		else if((ch[i]>='a')&&(ch[i]<='z'))
		{
			ch[i]=ch[i]-32;
		}
		else
		{
			printf("");
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
	
	ToggleCase(ch);
	
	return 0;
}