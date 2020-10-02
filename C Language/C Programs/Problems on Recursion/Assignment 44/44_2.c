
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
  
//Output :   1 2 3 4 5 

#include<stdio.h>

/*------NORMAL APPROACH------*/

void Display()
{
	int i= 1;
	
	while(i<=5)
	{
		printf("%d\t",i);
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
		printf("%d\t",i);
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