
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

//Output :   1 2 3 4 5 

#include<stdio.h>

/*------NORMAL APPROACH------*/

void Display(int iNo)
{
	int i= 1;
	
	while(i<=iNo)
	{
		printf("%d\t",i);
		i++;
	}
	
	printf("\n");
}

/*------RECURSIVE APPROACH------*/

void DisplayR(int iNo)
{
	static int i= 1;
	
	if(i<=iNo)
	{
		printf("%d\t",i);
		i++;
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