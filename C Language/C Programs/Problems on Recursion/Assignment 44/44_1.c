
//////////////////////////////////////////////////// 
//
//  Function Name:  Display, DisplayR.
//  Parameters:     Void.
//  Return Value:   Void
//  Author:         Shravani Vinod Kher
//  Date:           22 September 2020
//
////////////////////////////////////////////////////

/*Write a recursive program which display below pattern.*/
  
//Output :   * * * * *  

#include<stdio.h>

/*------NORMAL APPROACH------*/

void Display()
{
	int i= 1;
	
	while(i<=5)
	{
		printf("*\t");
		i++;
	}
	
	printf("\n");
}

/*------RECURSIVE APPROACH------*/

void DisplayR()
{
	static int i= 1;
	
	if(i<=5)
	{
		printf("*\t");
		i++;
		DisplayR();
	}
}

int main()
{
	Display();
	DisplayR();
	
	return 0;
}