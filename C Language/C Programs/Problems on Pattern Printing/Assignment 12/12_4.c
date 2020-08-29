
//////////////////////////////////////////////////// 
//
//  Function Name:  OddFactorial.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           10 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program to find odd factorial of given number.*/ 

//Input  :  5  
//Output :  15   (5 * 3 * 1) 

//Input  :  -5  
//Output :  15   (5 * 3 * 1) 

//Input  :  10  
//Output :  945  (9 * 7 * 5 * 3 * 1) 

#include<stdio.h>


int OddFactorial(int iNo)
{
	int iCnt= 0;
	int iAns= 1;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		if(iCnt%2!=0)
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
	
	iRet=OddFactorial(iValue);
	
	printf("The Factorial of Number is: %d",iRet);
	
	return 0;
}