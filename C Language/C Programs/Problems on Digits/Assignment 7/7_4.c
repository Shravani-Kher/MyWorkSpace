
//////////////////////////////////////////////////// 
//
//  Function Name:  Multiplication.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept number from user and return multiplication of all digits.*/ 

//Input  :  2395  
//Output :  270 

//Input  :  1018 
//Output :  8 

//Input  :  9440 
//Output :  144 

//Input  :  922432 
//Output :  864

#include<stdio.h>

int Multiplication(int iNo)
{
	int iDigit= 0;
	int iAns= 1;
	
	
	while(iNo!=0)
	{
	 iDigit=iNo%10;
	 
	   if(iDigit==0)
	   {
		   iDigit=1;
	   }
	   
        iAns=iAns*iDigit;	   
	   
	 iNo= iNo/10;
	}
	
	return iAns;
}
int main()
{
	int iValue= 0;
	int iRet= 0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	iRet=Multiplication(iValue);
	
    printf("The Multiplication of Digits is: %d",iRet);
	 
	return 0;
}