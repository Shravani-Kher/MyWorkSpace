
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkIf.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/* Write a program which accept three numbers and print its multiplication. */ 
  
//Input :  5   4   7    
//Output :  140  
  
//Input :  5   0   7    
//Output :  35  

//Input :  5   0   0    
//Output :  5  
  
//Input :  0   0   0    
//Output :  0

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int ChkIf(int iNo1, int iNo2, int iNo3)
{   
    int iAns= 0;
	
	if(iNo1==0)
	{
		iNo1=1;	
	}
    if(iNo2==0)
	{
		iNo2=1;
	}
	if(iNo3==0)
	{
		iNo3=1;
	}
	
	iAns= iNo1*iNo2*iNo3;
	
	return iAns;
}
int main()
{
	int iValue1= 0;
	int iValue2= 0;
	int iValue3= 0;
	int iRet= 0;
	
	printf("Enter 1st Number\n");
	scanf("%d",&iValue1);
	
	printf("Enter 2nd Number\n");
	scanf("%d",&iValue2);
	
	printf("Enter 3rd Number\n");
	scanf("%d",&iValue3);
	
	
	iRet=ChkIf(iValue1,iValue2,iValue3);
	
	printf("The Multiplication is %d",iRet);
	
	return 0;
}