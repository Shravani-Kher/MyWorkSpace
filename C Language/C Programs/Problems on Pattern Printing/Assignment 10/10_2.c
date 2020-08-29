
//////////////////////////////////////////////////// 
//
//  Function Name:  Area.
//  Parameters:     Float, Float.
//  Return Value:   Float.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
//////////////////////////////////////////////////// 

 /*Write a program which accept width & height of rectangle from user and calculate its area. 
 (Area = Width * Height)*/ 
 
//Input  :  5.3  9.78 
//Output :  51.834

#include<stdio.h>

float Area(float fNo1, float fNo2)
{
	float fAns= 0.0;
	
	fAns= fNo1*fNo2;
	
	return fAns;
	
}
int main()
{
	float fValue1= 0.0;
	float fValue2= 0.0;
	float fRet= 0;
	
	printf("Enter the Width\n");
	scanf("%f",&fValue1);
	
	printf("Enter the Height\n");
	scanf("%f",&fValue2);
	
	fRet=Area(fValue1,fValue2);
	
	printf("Area of circle is:%f",fRet);
	
	return 0;
}