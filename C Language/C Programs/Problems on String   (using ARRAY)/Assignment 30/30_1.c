
//////////////////////////////////////////////////// 
//
//  Function Name:  CopyString.
//  Parameters:     String, Array.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           27 August 2020
//
////////////////////////////////////////////////////

/*Write a program which accept string from user and copy the contents of that string into another string.
(Implement strcpy() function) */

//Input :   “Marvellous Multi OS” 
//Output :   “Marvellous Multi OS”    in another string 

#include<stdio.h>

char brr[50];

void CopyString(char arr[])
{
	int i= 0;
	
	if(arr==NULL)
	{
		return;
	}
	
	while(arr[i]!='\0')
	{
		brr[i]=arr[i];
		i++;
	}
	printf("%s",brr);                           /*while(*arr!='\0')
	                                            {
		                                            *brr=*arr;
		                                            arr++;
		                                            brr++;
	                                            }*/
	
	
}


int main()
{
	char arr[50];
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&arr);
	
	CopyString(arr);
	
	return 0;
}