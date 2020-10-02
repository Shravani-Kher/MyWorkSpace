
//////////////////////////////////////////////////// 
//
//  Function Name:  Fact, FactR.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           25 September 2020
//
////////////////////////////////////////////////////

/*Write a recursive program which accept number from user and return its factorial. */
 
//Input :  5  

//Output : 120   

#include<stdio.h>

/*------NORMAL APPROACH------*/

int Fact(int iNo)
{
	int i= 0;
	int iAns= 1;
	
	for(i=1;i<=iNo;i++)
	{
		iAns= iAns*i;
	}
	
	return iAns;
	
}

/*------RECURSIVE APPROACH------*/

int FactR(int iNo)
{
	static int iAns= 1;
	
	if(iNo!=0)
	{
		iAns= iAns*iNo;
		iNo--;
		FactR(iNo);
	}
	
	return iAns;
}

int main()
{
	int iNo= 0;
	int iRet= 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet= Fact(iNo);
	
	printf("/*------NORMAL APPROACH------*/\n");
	printf("The Factorial of Number is %d\n",iRet);
	
	iRet= FactR(iNo);
	
	printf("/*------RECURSIVE APPROACH------*/\n");
	printf("The Factorial of Number is %d\n",iRet);
	
	return 0;
}