
//////////////////////////////////////////////////// 
//
//  Function Name:  OddNumber.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/* Write a program which accepts N from user and print all odd numbers up to N.*/ 

//Input  :  18  
//Output :  1  3  5  7  9  11  13 

#include<stdio.h>

void OddNumber(int iNo)
{
	int iCnt= 0;
	
	while(iCnt<=iNo)
	{
		if(iCnt%2!=0)
		{
			printf("%d\t",iCnt);
		}
		
		iCnt++;
	}
	
}
int main()
{
	int iValue= 0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	OddNumber(iValue);
	
	return 0;
}