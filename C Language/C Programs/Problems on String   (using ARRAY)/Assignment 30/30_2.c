
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
(Implement strncpy() function)*/
 
//Input :   “Marvellous Multi OS”  
//              10 
//Output :   “Marvellous 

//Note : If third parameter is greater than the size of source string then copy whole string into destination. 

#include<stdio.h>

char brr[50];

void CopyString(char arr[],int iValue)
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
	
	if(i<=iValue)
	{
		for(j=0;j<=i;j++)
		{
			brr[j]= arr[j];
		}
	}
	else
	{
		for(j=0;j<=iValue;j++)
		{
			brr[j]= arr[j];
		}
	}
	
	printf("%s",brr);
}


int main()
{
	char arr[50];
	int iValue= 0;
	
	printf("Enter String\t");
	scanf("%[^'\n']s",&arr);
	
	printf("Enter the Number");
	scanf("%d",&iValue);
	
	CopyString(arr,iValue);
	
	return 0;
}