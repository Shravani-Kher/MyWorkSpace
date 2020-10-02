
//////////////////////////////////////////////////// 
//
//  Function Name:  Smallest, SmallestR.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           25 September 2020
//
////////////////////////////////////////////////////

/*Write a recursive program which accept number from user and return smallest digit*/
 
//Input : 87983 

//Output : 3 

#include<stdio.h>

/*------NORMAL APPROACH------*/

int Smallest(int iNo)
{
	int iSmall= 0;
	int iDigit= 0;
	
	iSmall= iNo%10;
	
	while(iNo!=0)
	{
		iDigit= iNo%10;
		if(iDigit<iSmall)
		{
			iSmall= iDigit;
		}
		iNo= iNo/10;
	}
	
	return iSmall;
}


/*------RECCURSIVE APPROACH------*/

int SmallestR(int iNo)
{
	int iDigit= 0;
	static int iSmall= 0;
	
	const int iSize= iNo%10;
	
	if(iNo!=0)
	{
		iDigit= iNo%10;
		if(iDigit<iSize)
		{
			iSmall= iDigit;
		}
		else if(iDigit<iSmall)
		{
			iSmall= iDigit;
		}
		else
		{
			printf("");
		}
		iNo= iNo/10;
		SmallestR(iNo);
	}
	
	return iSmall;
}

int main()
{
	int iNo= 0;
	int iRet= 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet=Smallest(iNo);
	
	printf("/*------NORMAL APPROACH------*/\n");
	printf("Smallest Digit is: %d\n",iRet);
	
	iRet=SmallestR(iNo);
	
	printf("/*------RECCURSIVE APPROACH------*/\n");
	printf("Smallest Digit is: %d\n",iRet);
	
	return 0;
}














