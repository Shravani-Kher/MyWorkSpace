
//////////////////////////////////////////////////// 
//
//  Function Name:  Display.
//  Parameters:     Integer, Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
//////////////////////////////////////////////////// 

/*Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”.*/

#include<stdio.h>

//Accept two Numbers from user
//print 1st Number 2nd number of times

void Display(int iNo1, int iNo2)
{
	int iCnt= 0;
	
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		printf("%d",iNo1);
	}
}
int main()
{
	int iValue1= 0;
	int iValue2= 0;
	
	printf("Enter 1st Number");
	scanf("%d",&iValue1);
	
	printf("Enter Second Number");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
	
}