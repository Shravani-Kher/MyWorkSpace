
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayCharacter.
//  Parameters:     Character.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           22 August 2020
//
//////////////////////////////////////////////////// 

/*Accept character from user. If it is capital then display all the characters from the input characters till Z.
 If input character is small then print all the characters in reverse order till a. In other cases return directly. */
 
//Input  :  Q 
//Output :  Q R S T U V W X Y Z 

//Input  :  m 
//Output :  m l k j i h g f e d c b a 


//Input  :  8 
//Output :  


#include<stdio.h>

void DisplayCharacter(char cValue)
{
	int iAns= 0;
	int iCnt= 0;
	
	if((cValue>=65)&&(cValue<=90))
	{
		for(iCnt=cValue;iCnt<=90;iCnt++)
		{
			printf("%c\t",iCnt);
		}
	}
	
	else if((cValue<=122)&&(cValue>=97))
	{
		for(iCnt=cValue;iCnt>=97;iCnt--)
		{
			printf("%c\t",iCnt);
		}
	}
	else
	{
		printf("\t");
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