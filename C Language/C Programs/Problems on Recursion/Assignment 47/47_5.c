
//////////////////////////////////////////////////// 
//
//  Function Name:  Reverse,ReverseR.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           25 September 2020
//
////////////////////////////////////////////////////

/*Write a recursive program which accept number from user and return its reverse number.*/
  
//Input :  523 

//Output :  325  

#include<stdio.h>

/*------NORMAL APPROACH------*/

int Reverse(int iNo)
{
	int iReverse= 0;
	int iDigit= 0;
	
	while(iNo!=0)
	{
		iDigit= iNo%10;
		iReverse=(iReverse*10)+iDigit;
		iNo= iNo/10;
	}
	
	return iReverse;
}


/*------RECCURSIVE APPROACH------*/

int ReverseR(int iNo)
{
	int iDigit= 0;
	static int iReverse= 0;
	
	if(iNo!=0)
	{
		iDigit= iNo%10;
		iReverse=(iReverse*10)+iDigit;
		iNo= iNo/10;
		
		ReverseR(iNo);
	}
	
	return iReverse;
}

int main()
{
	int iNo= 0;
	int iRet= 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet=Reverse(iNo);
	
	printf("/*------NORMAL APPROACH------*/\n");
	printf("Reverse Number is: %d\n",iRet);
	
	iRet=ReverseR(iNo);
	
	printf("/*------RECCURSIVE APPROACH------*/\n");
	printf("Reverse Number is: %d\n",iRet);
	
	return 0;
}














