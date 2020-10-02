
//////////////////////////////////////////////////// 
//
//  Function Name:  SumDigit, SumDigitR.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           22 September 2020
//
////////////////////////////////////////////////////

/*Write a recursive program which accept number from user and return summation of its digits.*/
 
//Input :  879 

//Output :  24 

#include<stdio.h>

/*------NORMAL APPROACH------*/

int SumDigit(int iNo)
{
	printf("------NORMAL APPROACH------\n");
	
	int iAns= 0;
	int iDigit= 0;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	while(iNo!=0)
	{
		iDigit= iNo%10;
		iAns= iAns+iDigit;
		iNo= iNo/10;
	}
	
	return iAns;
}

/*------RECURSIVE APPROACH------*/

printf("------RECURSIVE APPROACH------\n");

int SumDigitR(int iNo)
{
	
	static int iDigit= 0;
	static int iAns = 0;
	
	if(iNo!=0)
	{
		iDigit= iNo%10;
		iAns= iAns+ iDigit;
		iNo= iNo/10;
		SumDigitR(iNo);
	}
	
	return iAns;
}

int main()
{
	int iNo= 0;
	int iRet= 0;
	
	printf("Enter the Number");
	scanf("%d",&iNo);
	
	iRet= SumDigit(iNo);
	printf("%d\n",iRet);
	
	iRet= SumDigitR(iNo);
	printf("%d\n",iRet);
	
	return 0;
}