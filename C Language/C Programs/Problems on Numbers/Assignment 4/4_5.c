                                              
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayMul.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
//////////////////////////////////////////////////// 
/*Write a program which accept number from user and return difference between 
summation of all its factors and non factors.*/

//Input  :  12 
//Output : -34  (16 - 50)  

//Input  :  10  
//Output : -29  (8 - 37)

#include<stdio.h>

void DisplayMul(int iNo)
{
	int iCnt= 0;
	int iAns= 0;
	int iSum= 0;
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iSum= iSum+iCnt;
		}
		else
		{
			iAns= iAns+iCnt;
		}
	}
	printf("%d",iSum);
	printf("%d",iAns);
}
int main()
{
	int iValue= 0;
	
	printf("Enter the Number");
	scanf("%d",&iValue);
	
	DisplayMul(iValue);
	
	return 0;
}