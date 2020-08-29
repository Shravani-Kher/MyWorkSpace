 
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkFrequency.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept number from user and count frequency of such a digits which are less than 6.*/

//Input  :  2395  
//Output :  3                                                       

//Input  :  1018 
//Output :  3 

//Input  :  9440 
//Output :  3 

//Input  :  96672 
//Output :  1 

#include<stdio.h>

int ChkFrequency(int iNo)
{
	int iDigit= 0;
	int iCnt= 0;
	
	while(iNo!=0)
	{
	 iDigit=iNo%10;
	   if(iDigit<6)
	   {
		  iCnt++;
	   }
	 iNo= iNo/10;
	}
	
	return iCnt;
}
int main()
{
	int iValue= 0;
	int iRet= 0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	iRet=ChkFrequency(iValue);
	
    printf("The frequency of Number Less than 6 is: %d",iRet);
	 
	return 0;
}