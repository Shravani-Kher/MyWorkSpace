
//////////////////////////////////////////////////// 
//
//  Function Name:  CopyString.
//  Parameters:     String, Array.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           27 August 2020
//
////////////////////////////////////////////////////

/*Write a program which accept string from user and copy small characters of that string into another string.*/
 
//Input :   “Marvellous multi OS” 
//Output :   “arvellous multi” 

#include<stdio.h>

char brr[50];

void CopyString(char arr[])
{
	int i= 0;
	int j= 0;
	
	if(arr==NULL)
	{
		return;
	}
	while(arr[i]!='\0')
	{
	    if((arr[i]>='a')&&(arr[i]<='z'))
	    {
	        brr[j]=arr[i];
		    j++; 
	    }
		i++;
	}
	
	printf("%s",brr);
}


int main()
{
	char arr[50];
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&arr);
	
	CopyString(arr);
	
	return 0;
}