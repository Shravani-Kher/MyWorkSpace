
//////////////////////////////////////////////////// 
//
//  Function Name:  Divide.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
////////////////////////////////////////////////////

/*Program to divide two numbers */ 

#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
   int iAns= 0;
   
   if(iNo2==0)
   {
	  return -1;
	  
   }   
   
   
   iAns= iNo1/iNo2;
   
   return iAns;  
}

int main()
{
	int iValue1= 0;
	int iValue2= 0;
	int iRet= 0;
	
	printf("Enter 1st Number\n");
	scanf("%d",&iValue1);
	printf("Enter 2nd Number\n");
	scanf("%d",&iValue2);
	
	iRet= Divide(iValue1,iValue2);
	
    printf("The division is: %d\n",iRet);
	
	return 0;
}