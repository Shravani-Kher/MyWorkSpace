
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayRange.
//  Parameters:     Integer, Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           10 August 2020
//
////////////////////////////////////////////////////

/*Write a program which accept range from user and display all even numbers in between that range.*/ 

//Input  :  23 35                                                      
//Output :  24 26 28 30 32 34    

//Input  :  10 18 
//Output :  10 12 14 16 18 

//Input  :  10 10 
//Output :  10  

//Input  :  -10 2 
//Output :  -10 -8 -6 -4 -2 0 2 

//Input  :  90 18 
//Output :  Invalid range
 
#include<stdio.h>

void DisplayRange(int iStart, int iEnd)
{
	int iCnt= iStart;
    
    if(iStart>iEnd)
	{
		printf("Invalid Input");
	}
	
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		if(iCnt%2==0)
		{
		printf("%d\t",iCnt);
		}
	}
	
}
int main()
{
	int iValue1= 0;
	int iValue2= 0;
	
	printf("Enter the Starting point of Range\n");
	scanf("%d",&iValue1);
	
	printf("Enter the Ending point of Range\n");
	scanf("%d",&iValue2);
	
	DisplayRange(iValue1,iValue2);
	
	return 0;
}