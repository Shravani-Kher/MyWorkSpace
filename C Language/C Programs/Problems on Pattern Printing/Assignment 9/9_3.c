
//////////////////////////////////////////////////// 
//
//  Function Name:  NumberLine.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept number from user and print its numbers line.*/ 
 
//Input  :  4  
//Output :  -4  -3  -2  -1  0  1  2  3  4 

#include<stdio.h>

void NumberLine(int iNo)
{
	int iCnt= 0;
	
	for(iCnt=-iNo;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iCnt);
	}
	
}
int main()
{
	int iValue= 0;
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	NumberLine(iValue);
	
	return 0;
}