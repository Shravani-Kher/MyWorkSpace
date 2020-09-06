
//////////////////////////////////////////////////// 
//
//  Function Name:  StrCpy.
//  Parameters:     String, Array.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           04 September 2020
//
////////////////////////////////////////////////////

/*Write a program which accept string from user and copy that characters of that string into 
another string by removing all white spaces.*/ 

//Input  :   “Marvel   lous Pyth   on”                                   
//Output :   “MarvellousPython”

#include<stdio.h>

void StrCpy(char arr[], char brr[])
{
	int i= 0;
	int j= 0;
	
	while(arr[j]!='\0')
	{
		if(arr[j]!=' ')
		{
		    brr[i]= arr[j];
		    i++;
		}
		j++;
	}
	
	printf("%s",brr);
	
}


int main()
{
	char arr[50]={'\0'};
	char brr[50]={'\0'};
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&arr);
	
	StrCpy(arr,brr);

	
	return 0;
}