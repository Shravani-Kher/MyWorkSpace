
//////////////////////////////////////////////////// 
//
//  Function Name:  StrCpyCap.
//  Parameters:     String, Array.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           04 September 2020
//
////////////////////////////////////////////////////

/*Write a program which accept string from user and copy that characters of that string into another 
string by converting all small characters into capital case.*/
 
//Input  :   “Marvellous Python 2” 
//Output :   “MARVELLOUS PYTHON 2” 

#include<stdio.h>

void StrCpyCap(char arr[], char brr[])
{
	int i= 0;
	
	while(arr[i]!='\0')
	{
		if((arr[i]>='a')&&(arr[i])<='z')
		{
			arr[i] =arr[i]-32;
		}
		
		brr[i]= arr[i];
		i++;
	}
	
	printf("%s",brr);
}


int main()
{
	char arr[50]={'\0'};
	char brr[50]={'\0'};
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&arr);
	
	StrCpyCap(arr,brr);

	
	return 0;
}