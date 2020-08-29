 

//////////////////////////////////////////////////// 
//
//  Function Name:  PrintEven.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
////////////////////////////////////////////////////

/*Write a program which accept one number from user and print that number of even numbers on screen.*/ 
 
//Input :  7  

//Output:  2 4  6  8  10  12  14

#include<stdio.h>

void PrintEven(int iNo)
{
	int iCnt=0;
	if(iNo<=0)
	{
		return;
	}
	for(iCnt=1;iCnt<=iNo*2;iCnt++)
	{
		if(iCnt%2==0)
		{
		printf("%d",iCnt);
		}
	}
}
int main()
{
	int iValue= 0;
	
	printf("Enter the Number");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	
	return 0;
}