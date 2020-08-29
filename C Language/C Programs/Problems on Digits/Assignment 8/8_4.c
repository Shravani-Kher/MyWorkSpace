 
//////////////////////////////////////////////////// 
//
//  Function Name:  Table.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept number from user and display its table.*/ 

//Input  :  2                                                    
//Output :  2 4 6 8 10 12 14 16 18 20 

//Input  :  5 
//Output :  5 10 15 20 25 30 35 40 45 50 

//Input  :  -5 
//Output :  5 10 15 20 25 30 35 40 45 50 

#include<stdio.h>

void Table(int iNo)
{
	int iCnt= 0;
	int iAns= 0;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	for(iCnt=1;iCnt<=10;iCnt++)
	{
		iAns=iNo*iCnt;
		printf("%d\n",iAns);
	}
	
}
int main()
{
	int iValue= 0;
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	Table(iValue);
	
	return 0;
}