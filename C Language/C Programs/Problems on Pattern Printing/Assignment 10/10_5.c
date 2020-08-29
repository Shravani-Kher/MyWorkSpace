

//////////////////////////////////////////////////// 
//
//  Function Name:  Display.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 

/* Write a program which accept area in square feet and convert it into square meter.
 (1 square feet = 0.0929 Square meter) */
 
//Input  :  5 
//Output :  0.464515 

//Input  :  7 
//Output :  0.650321

#include<stdio.h>

float FeettoMeter(float fNo)
{
	float fAns= 0.0;
	
	fAns=(0.0929)*fNo;
	
	return fAns;
}
int main()
{
	float fValue= 0;
	float fRet= 0;
	
	printf("Enter Area in Square Feet\n");
	scanf("%f",&fValue);
	
	fRet=FeettoMeter(fValue);
	
	printf("The Area in Square Meter is : %f",fRet);
	
	return 0;
}