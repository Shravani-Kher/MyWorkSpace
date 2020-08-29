
//////////////////////////////////////////////////// 
//
//  Function Name:  Display.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept number from user and print even factors of that number. */ 

//Input :  36 

//Output:  2 6 12 18

#include<stdio.h>

int DisplayEvenFactor(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
		
	}
	if(iNo==0){
		printf("0\n");
	}
	
	if(iNo==1){
		printf("1");
	}
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		
		if(iNo%iCnt==0&& iCnt%2==0)
		{
			printf("%d\n",iCnt);
		}
	}
	
	
}


int main()
{
	int iValue=0;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	DisplayEvenFactor(iValue);	
	
	return 0;
}