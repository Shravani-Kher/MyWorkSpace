
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
  
//Output :   A B C D E F 

#include<stdio.h>

/*------NORMAL APPROACH------*/

void Display()
{
	char i= 'A';
	
	while(i<='F')
	{
		printf("%c\t",i);
		i++;
	}
	
	printf("\n");
}

/*------RECURSIVE APPROACH------*/

void DisplayR()
{
	static char i= 'A';
	
	if(i<='F')
	{
		printf("%c\t",i);
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