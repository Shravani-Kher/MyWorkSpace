
//////////////////////////////////////////////////// 
//
//  Function Name:  fPercent.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept total marks & obtained marks from user and calculate percentage.*/  
 
//Input :  1000  745    
//Output :  74.5% 


#include<stdio.h>

float fPercent(int iNo1, int iNo2)
{
	float fAns= 0.0;
	
	fAns= (iNo2/iNo1)*100;
	
	return fAns;
}
int main()
{
	int iValue1= 0;
	int iValue2= 0;
	float fRet= 0;
	
	printf("Enter Total Marks\n");
	scanf("%d",&iValue1);
	
	printf("Enter Obtained Marks\n");
	scanf("%d",&iValue2);
	
	fRet= fPercent(iValue1,iValue2);
	
	printf("%f",fRet);
	
	return 0;
}