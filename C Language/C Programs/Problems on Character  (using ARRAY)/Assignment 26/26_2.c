
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayCharacter.
//  Parameters:     Character.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           22 August 2020
//
//////////////////////////////////////////////////// 

/*Accept character from user. If character is small display its corresponding capital character, 
and if it small then display its corresponding capital. In other cases display as it is.*/
 
//Input  :  Q 
//Output :  q 

//Input  :  m 
//Output :  M 

//Input  :  4 
//Output :  4  

//Input  :  % 
//Output :  % 

#include<stdio.h>

void DisplayCharacter(char cValue)
{
	int iAns= 0;
	
	if((cValue>=65)&&(cValue<=90))
	{
		iAns=cValue+32;
		printf("%c",iAns);
	}
	
	else if((cValue<=122)&&(cValue>=97))
	{
		iAns=cValue-32;
		printf("%c",iAns);
	}
	else
	{
		printf("%c",cValue);
	}
	
}

int main()
{
	char cValue= '\0';
	
	printf("Enter One Character\t");
	scanf("%c",&cValue);
	
	DisplayCharacter(cValue);
	
	return 0;
}