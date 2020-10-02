
//////////////////////////////////////////////////// 
//
//  Function Name:  Product, ProductR.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           25 September 2020
//
////////////////////////////////////////////////////

/*Write a recursive program which accept number from user and return its  product of digits.*/
  
//Input :  523 

//Output :  30

#include<stdio.h>

/*------NORMAL APPROACH------*/

int Product(int iNo)
{
	int iDigit= 0;
	int iAns= 1;
	
	while(iNo!=0)
	{
		iDigit= iNo%10;
		iAns= iAns*iDigit;
		iNo= iNo/10;
	}
	
	return iAns;
	
}

/*------RECURSIVE APPROACH------*/

int ProductR(int iNo)
{
	static int iAns= 1;
	int iDigit= 0;
	
	if(iNo!=0)
	{
		iDigit= iNo%10;
		iAns= iAns*iDigit;
		iNo=iNo/10;
		ProductR(iNo);
	}
	
	return iAns;
}

int main()
{
	int iNo= 0;
	int iRet= 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet= Product(iNo);
	
	printf("/*------NORMAL APPROACH------*/\n");
	printf("The Product of Digits is %d\n",iRet);
	
	iRet= ProductR(iNo);
	
	printf("/*------RECURSIVE APPROACH------*/\n");
	printf("The Product of Digits is %d\n",iRet);
	
	return 0;
}