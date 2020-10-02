
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
  
//Output :   a b c d e f 

#include<stdio.h>

/*------NORMAL APPROACH------*/

void Display()
{
	char i= 'a';
	
	while(i<='f')
	{
		printf("%c\t",i);
		i++;
	}
	
	printf("\n");
}

/*------RECURSIVE APPROACH------*/

void DisplayR()
{
	static char i= 'a';
	
	if(i<='f')
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