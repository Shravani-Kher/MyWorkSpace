
//////////////////////////////////////////////////// 
//
//  Function Name:  KMtoMeter.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
////////////////////////////////////////////////////

/*Write a program which accept distance in kilometre and convert it into meter. 
(1 kilometre = 1000 Meter)*/ 

//Input  :  5 
//Output :  5000 

//Input  :  12 
//Output :  12000

 
#include<stdio.h>

int KMtoMeter(int iNo1)
{
	int iAns= 0;
	
	iAns= iNo1*1000;
	
	return iAns;
}
int main()
{
	int iValue= 0;
	int iRet= 0;
	
	printf("Enter Number of Kilometer\n");
	scanf("%d",&iValue);
	
	iRet=KMtoMeter(iValue);
	
	printf("In Meters is: %d",iRet);
	
	return 0;
}