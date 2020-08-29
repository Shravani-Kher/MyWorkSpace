
//////////////////////////////////////////////////// 
//
//  Function Name:  FHtoCelsius.
//  Parameters:     Float.
//  Return Value:   Float.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept temperature in Fahrenheit and convert it into celsius.
 (1 celsius = (Fahrenheit -32) * (5/9))*/ 

//Input  :  10 
//Output :  -12.2222 (10 - 32) * (5/9) 

//Input  :  34 
//Output :  1.11111  (34 - 32) * (5/9) 

#include<stdio.h>

float FHtoCelsius(float fNo)
{
	float fAns= 0.0;
	
	fAns=((fNo-32)*5/9);
	
	return fAns;
}
int main()
{
	float fValue= 0;
	float fRet= 0;
	
	printf("Enter Temperature in Fahrenheit\n");
	scanf("%f",&fValue);
	
	fRet=FHtoCelsius(fValue);
	
	printf("The Temperature in Celsius is : %f",fRet);
	
	return 0;
}