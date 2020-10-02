
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
  
//Output :   5 4 3 2 1 

#include<stdio.h>

/*------NORMAL APPROACH------*/

void Display()
{
	int i= 5;
	
	while(i>=1)
	{
		printf("%d\t",i);
		i--;
	}
	
	printf("\n");
}

/*------RECURSIVE APPROACH------*/

void DisplayR()
{
	static int i= 5;
	
	if(i>=1)
	{
		printf("%d\t",i);
		i--;
		DisplayR();
	}
}

int main()
{
	Display();
	DisplayR();
	
	return 0;
}