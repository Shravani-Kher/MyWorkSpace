
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkON.
//  Parameters:     Integer.
//  Return Value:   BOOL.
//  Author:         Shravani Vinod Kher
//  Date:           29 September 2020
//
//////////////////////////////////////////////////// 

/*Problem Statement:- Write a program which accept one number , two positions from user and 
check whether bit at first or bit at second position is ON or OFF. */

//Input  : 10  3  7 
//Output : FALSE


//Input  : 10  2 4 
//Output : TRUE


#include<stdio.h>
#define TRUE 1
#define FALSE 0

int ChkOn(int iNo,int iPos1,int iPos2)
{
	int iResult=0;
	int iResult1=0;
	
	int iMask1=0x00000001;
		
		iMask1=iMask1<<(iPos1-1);
	
	int iMask2=0x00000001;
		
		iMask2=iMask2<<(iPos2-1);
	
	iResult=iMask1&iNo;
	iResult1=iMask2&iNo;
	
	if(iResult==iMask1||iResult1==iMask2)
	{
		return TRUE;
	}
	
}

int main()
{
	int iNo=0;
	int iPos1=0;
	int iPos2=0;
	int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iNo);
	
	printf("Enter First Position :");
	scanf("%d",&iPos1);
	
	printf("Enter Second Position :");
	scanf("%d",&iPos2);
	
	iRet=ChkOn(iNo,iPos1,iPos2);
	
	if(iRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
}