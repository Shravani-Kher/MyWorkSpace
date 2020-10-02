
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
  
//Input :  6 

//Output :   A B C D E F 

#include<stdio.h>

/*------NORMAL APPROACH------*/

void Display(int iNo)
{
	char ch= 'A';
	
	while(iNo>0)
	{
		printf("%c\t",ch);
		ch++;
		iNo--;
	}
	
	printf("\n");
}

/*------RECURSIVE APPROACH------*/

void DisplayR(int iNo)
{
	
	static char ch= 'A';
	
	if(iNo>0)
	{
		printf("%c\t",ch);
		ch++;
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