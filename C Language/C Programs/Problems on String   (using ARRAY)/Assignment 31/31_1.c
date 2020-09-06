
//////////////////////////////////////////////////// 
//
//  Function Name:  StrCpyRev.
//  Parameters:     String, Array.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           04 September 2020
//
////////////////////////////////////////////////////

/*Write a program which accept string from user and copy that characters of that string 
into another string in reverse order.*/
 
//Input  :   “Marvellous Python” 
//Output :   “nohtyP suollevraM” 

#include<stdio.h>

void StrCpyRev(char arr[], char brr[])
{
	int i= 0;
	int j= 0;
	
	if(arr==NULL)
	{
		return;
	}
	
	while(arr[i]!='\0')
	{
		i++;
	}
	i--;
	
	while(i>=0)
	{
		brr[j]= arr[i];
		
		j++;
		i--;
	}
	
	brr[j]='\0';
	
}


int main()
{
	char arr[50]={'\0'};
	char brr[50]={'\0'};
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&arr);
	
	StrCpyRev(arr,brr);
	
	printf("%s",brr);
	
	return 0;
}