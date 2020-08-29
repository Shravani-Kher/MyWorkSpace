
//////////////////////////////////////////////////// 
//
//  Function Name:  Area.
//  Parameters:     Float.
//  Return Value:   Float.
//  Author:         Shravani Vinod Kher
//  Date:           07 August 2020
//
////////////////////////////////////////////////////

/*Write a program which accept radius of circle from user and calculate its area. 
Consider value of PI as 3.14. (Area = PI * Radius * Radius) */ 

//Input  :  5.3  
//Output :  88.2026   

//Input  :  10.4  
//Output :  339.6224   

#include<stdio.h>

float Area(float fNo)
{
	float fPI= 3.14;
	float fAns= 0.0;
	
	fAns= fPI*fNo*fNo;
	
	return fAns;
	
}
int main()
{
	float fValue= 0;
	float fRet= 0;
	printf("Enter the Radius\n");
	scanf("%f",&fValue);
	
	fRet=Area(fValue);
	
	printf("Area of circle is:%f",fRet);
	return 0;
}