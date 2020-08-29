
//////////////////////////////////////////////////// 
//
//  Function Name:  AdditionOfRange.
//  Parameters:     Integer, Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           10 August 2020
//
////////////////////////////////////////////////////

/*Write a program which accept range from user and return addition of all numbers in between that range. 
(Range should contains positive numbers only) */ 

//Input  :  23 30  
//Output :  212    

//Input  :  10 18 
//Output :  126 

//Input  :  -10 2 
//Output :  Invalid range                                                       

//Input  :  90 18 
//Output :  Invalid range 
 
#include<stdio.h>

void AdditionOfRange(int iStart, int iEnd)
{
	int iCnt= iStart;
	int iAns= 0;
    
    if((iStart)<0||(iEnd<0))
	{
		printf("Invalid Input");
		
		return;
	}
	
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		iAns= iAns+iCnt;
	}
	
	printf("%d\n",iAns);
}
int main()
{
	int iValue1= 0;
	int iValue2= 0;
	
	printf("Enter the Starting point of Range\n");
	scanf("%d",&iValue1);
	
	printf("Enter the Ending point of Range\n");
	scanf("%d",&iValue2);
	
	AdditionOfRange(iValue1,iValue2);
	
	return 0;
}