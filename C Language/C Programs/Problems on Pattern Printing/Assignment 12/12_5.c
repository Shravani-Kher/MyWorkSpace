
//////////////////////////////////////////////////// 
//
//  Function Name:  DifferenceEvenOdd.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           10 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which returns difference between Even factorial and odd factorial of given number.*/  

//Input  :  5  
//Output :  -7   (8 - 15) 

//Input  :  -5  
//Output :  -7   (8 - 15) 

//Input  :  10  
//Output :  2895  (3840 - 945) 

#include<stdio.h>


int DifferenceEvenOdd(int iNo)
{
	int iCnt= 0;
	int iAns= 0;
	int iEven= 1;
	int iOdd= 1;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		if(iCnt%2==0)
		{
		iEven= iEven*iCnt;
		}
		else
		{
		iOdd= iOdd*iCnt;
		}
	}
	
	iAns=(iEven)-(iOdd);
	
	return iAns;
}
int main()
{
	int iValue= 0;
	int iRet= 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=DifferenceEvenOdd(iValue);
	
	printf("The Difference Between Factors is: %d",iRet);
	
	return 0;
}