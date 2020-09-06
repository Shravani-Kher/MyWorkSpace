
//////////////////////////////////////////////////// 
//
//  Function Name:  StrCpyToggle.
//  Parameters:     String, Array.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           04 September 2020
//
////////////////////////////////////////////////////

/*Write a program which accept string from user and copy that characters of that string into 
another string by toggling the case.*/
 
//Input  :   “Marvellous Python 2” 
//Output :   “mARVELLOUS pYTHON 2”  

#include<stdio.h>

void StrCpyToggle(char arr[], char brr[])
{
	int i= 0;
	
	while(arr[i]!='\0')
	{
		if((arr[i]>='A')&&(arr[i])<='Z')
		{
			arr[i] =arr[i]+32;
			brr[i]= arr[i];
		}
		
		else if((arr[i]>='a')&&(arr[i])<='z')
		{
			arr[i] =arr[i]-32;
			brr[i]= arr[i];
		}
		else
		{
			brr[i]= arr[i];
		}
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
	
	StrCpyToggle(arr,brr);
	
	return 0;
}