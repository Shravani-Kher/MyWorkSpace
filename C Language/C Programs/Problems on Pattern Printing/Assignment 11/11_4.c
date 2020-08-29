 
//////////////////////////////////////////////////// 
//
//  Function Name:  AdditionRange.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
////////////////////////////////////////////////////

/*Write a program which accept range from user and return addition of all even numbers in between that range. 
(Range should contains positive numbers only) */

//Input  :  23 30  
//Output :  108    

//Input  :  10 18 
//Output :  70 

//Input  :  -10 2 
//Output :  Invalid range 

//Input  :  90 18 
//Output :  Invalid range

#include<stdio.h>

int AdditionRange(int iStart,int iEnd)
{
	int iCnt= iStart;
	int iAns= 0;
	
	if((iStart<0)||(iStart>iEnd))
	{
	    return FALSE;
	}
	
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		if((iCnt%2)==0)
		{
			iAns=iAns+iCnt;
		}
		
	}
	return iAns;
	
}
int main()
{
	int iValue1= 0;
	int iValue2= 0;
	int iRet= 0;
	
	printf("Enter Starting Point of Range\n");
	scanf("%d",&iValue1);
	
	printf("Enter Ending Point of Range\n");
	scanf("%d",&iValue2);
	
	iRet= AdditionRange(iValue1,iValue2);
	
	if(iRet==FALSE)
	{
		printf("Invalid Input!!!\n");
	}
	else
	{
	printf("Addition of Even Numbers in Range is :%d\n",iRet);
	}
	
	return 0;
}