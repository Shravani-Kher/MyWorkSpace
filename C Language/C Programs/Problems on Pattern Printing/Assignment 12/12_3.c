
//////////////////////////////////////////////////// 
//
//  Function Name:  EvenFactorial.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           10 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program to find even factorial of given number.*/  

//Input  :  5  
//Output :  8   (4 * 2) 

//Input  :  -5  
//Output :  8   (4 * 2) 

//Input  :  10  
//Output :  3840  (10 * 8 * 6 * 4 * 2) 

#include<stdio.h>


int EvenFactorial(int iNo)
{
	int iCnt= 0;
	int iAns= 1;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		if(iCnt%2==0)
		{
		iAns= iAns*iCnt;
		}
	}
	
	return iAns;
}
int main()
{
	int iValue= 0;
	int iRet= 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=EvenFactorial(iValue);
	
	printf("The Factorial of Number is: %d",iRet);
	
	return 0;
}