
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkWeather.
//  Parameters:     Integer.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept number from user and check whether it contains 0 in it or not. */

//Input  :  2395  
//Output :  There is no Zero 

//Input  :  1018 
//Output :  It Contains Zero 

//Input  :  9000 
//Output :  It Contains Zero 

//Input  :  10687 
//Output :  It Contains Zero 


#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkWeather(int iNo)
{
	int iDigit= 0;
	
	while(iNo!=0)
	{
	 iDigit=iNo%10;
	   if(iDigit==0)
	   {
		   return TRUE;
	   }
	 iNo= iNo/10;
	}
	
	return FALSE;
}
int main()
{
	int iValue= 0;
	BOOL bRet= FALSE;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	bRet=ChkWeather(iValue);
	
	if(bRet==TRUE)
	{
		printf("The Number Contains Zero");
	}
	else
	{
		printf("The Number Do Not Contain Zero");
	}
	 
	return 0;
}