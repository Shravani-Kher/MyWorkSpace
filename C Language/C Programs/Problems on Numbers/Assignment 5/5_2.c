//////////////////////////////////////////////////// 
//
//  Function Name:  ChkIf.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept one number from user and check whether that number is greater than 100 or not.*/   

//Input : 101    
//Output : Greater  
  
//Input : 39    
//Output : Smaller 

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int ChkIf(int iNo)
{
	if(iNo>100)
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
	int iValue= 0;
	int iRet= 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=ChkIf(iValue);
	
	if(iRet==TRUE)
	{
		printf("The Number is Greater");
	}
	else
	{
		printf("The Number is Smaller");
	}
	
	return 0;
}