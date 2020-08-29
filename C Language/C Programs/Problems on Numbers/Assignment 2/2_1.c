
//////////////////////////////////////////////////// 
//
//  Function Name:  Display.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
//////////////////////////////////////////////////// 

/*Accept one number from user and print that number of * on screen.  */

#include<stdio.h>

void Display(int iNo)
{
	
	while(iNo>0)       
	{
		printf("*\n");
		iNo--;
	}
}
int main()
{
	int iValue= 0;
	
	printf("Enter a Number");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}