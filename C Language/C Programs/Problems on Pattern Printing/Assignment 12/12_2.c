
//////////////////////////////////////////////////// 
//
//  Function Name:  ConvertUStoINR.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           10 August 2020
//
//////////////////////////////////////////////////// 

/*Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees.*/  

//Input  :  10 
//Output :  700                                                     

//Input  :  3 
//Output :  270  

//Input  :  1200 
//Output :  84000 

#include<stdio.h>


int ConvertUStoINR(int iNo)
{
	int iAns= 0;
	
	iAns=iNo*70;
	
	return iAns;
	
}
int main()
{
	int iValue= 0;
	int iRet= 0;
	
	printf("Enter the Value in US Dollar\n");
	scanf("%d",&iValue);
	
	iRet=ConvertUStoINR(iValue);
	
	printf("The Value in INR is: %d",iRet);
	
	return 0;
}