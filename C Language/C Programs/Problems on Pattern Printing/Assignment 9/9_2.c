
//////////////////////////////////////////////////// 
//
//  Function Name:  Print.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept number from user and print numbers till that  number. */

//Input  :  8  
//Output :  1  2  3  4  5  6  7  8 

#include<stdio.h>

void Print(int iNo)
{
	int iCnt= 1;
	
	while(iCnt<=iNo)
	{
		printf("%d\t",iCnt);
		iCnt++;
	}
}
int main()
{
	int iValue= 0;
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	Print(iValue);
	
	return 0;
}