
//////////////////////////////////////////////////// 
//
//  Function Name:  Factorial.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program to find factorial of given number.*/  

//Input  :  5  
//Output :  120   (5 * 4 * 3 * 2 * 1) 

//Input  :  -5  
//Output :  120   (5 * 4 * 3 * 2 * 1) 

//Input  :  4  
//Output :  24    (4 * 3 * 2 * 1) 

#include<stdio.h>

int Factorial(int iNo)
{
	int iCnt= 0;
	int iAns= 1;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		iAns=iAns*iCnt;
	}
	
	return iAns;
}
int main()
{
	int iValue= 0;
	int iRet= 0;
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	iRet=Factorial(iValue);
	
	printf("Factorial of Number is: %d", iRet);
	
	return 0;
}