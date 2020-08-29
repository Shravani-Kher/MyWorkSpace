
//////////////////////////////////////////////////// 
//
//  Function Name:  Reverse.
//  Parameters:     String.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           27 August 2020
//
////////////////////////////////////////////////////

/*Write a program which accept string from user reverse that string in place.*/
 
//Input :   “abcd” 
//Output :   “dcba” 

//Input :   “abba” 
//Output :   “abba” 

#include<stdio.h>

void Reverse(char ch[])
{
	int temp= 0;
	int iStart= 0;
	int iEnd= 0;
	int i= 0;
	
	while(ch[iEnd]!='\0')
	{
		iEnd++;
		i++;
	}
	iEnd--;
	
	while(iStart<iEnd)
	{
		temp= ch[iStart];
		ch[iStart]= ch[iEnd];
		ch[iEnd]= temp;
		
		iStart++;
		iEnd--;
	}
	
	printf("%s",ch);
	
	
	
}


int main()
{
	char ch[50];
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&ch);
	
	Reverse(ch);
	
	return 0;
}