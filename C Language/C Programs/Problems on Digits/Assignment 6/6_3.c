
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkFrequency.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept number from user and count frequency of 2 in it.*/ 

//Input  :  2395  
//Output :  1 

//Input  :  1018 
//Output :  0 

//Input  :  9000 
//Output :  0 

//Input  :  922432 
//Output :  3 

#include<stdio.h>

int ChkFrequency(int iNo)
{
	int iDigit= 0;
	int iCnt= 0;
	
	while(iNo!=0)
	{
	 iDigit=iNo%10;
	   if(iDigit==2)
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
	
    printf("The frequency of Number 2 is: %d",iRet);
	 
	return 0;
}