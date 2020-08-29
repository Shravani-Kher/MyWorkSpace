
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkIf.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept two numbers and check whether numbers are equal or not.*/  
 
//Input : 10 10    
//Output : Equal    

//Input : 10 12    
//Output : Not Equal   

//Input : 10 -10    
//Output : Not Equal

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int ChkIf(int iNo1,int iNo2)
{
	if(iNo1==iNo2)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int iValue1= 0;
	int iValue2= 0;
	int iRet= 0;
	
	printf("Enter 1st Number\n");
	scanf("%d",&iValue1);
	
	printf("Enter 2nd Number\n");
	scanf("%d",&iValue2);
	
	iRet=ChkIf(iValue1,iValue2);
	
	if(iRet==TRUE)
	{
		printf("The Numbers are EQUAL");
	}
	else
	{
		printf("The Numbers are not EQUAL");
	}
	
	return 0;
}