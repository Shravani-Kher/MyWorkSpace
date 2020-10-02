
//////////////////////////////////////////////////// 
//
//  Function Name:  Display, DisplayR.
//  Parameters:     Integer.
//  Return Value:   Void
//  Author:         Shravani Vinod Kher
//  Date:           22 September 2020
//
////////////////////////////////////////////////////

/*Write a recursive program which display below pattern.*/
  
//Input :   5 

//Output :   * * * * * 

#include<stdio.h>

/*------NORMAL APPROACH------*/

void Display(int iNo)
{
	
	while(iNo!=0)
	{
		printf("*\t");
		iNo--;
	}
	
	printf("\n");
}

/*------RECURSIVE APPROACH------*/

void DisplayR(int iNo)
{
	
	if(iNo!=0)
	{
		printf("*\t");
		iNo--;
		DisplayR(iNo);
	}
}

int main()
{
	int iNo= 0;
	
	printf("Enter the Number");
	scanf("%d",&iNo);
	
	Display(iNo);
	DisplayR(iNo);
	
	return 0;
}