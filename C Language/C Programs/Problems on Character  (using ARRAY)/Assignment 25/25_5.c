
//////////////////////////////////////////////////// 
//
//  Function Name:  CheckDivison.
//  Parameters:     Character.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           22 August 2020
//
//////////////////////////////////////////////////// 

 /*Accept division of student from user and depends on the division display exam timing. 
 There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM,
 C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive) */

//Input :  C 
//Output :  Your exam at 9.20 AM 

//Input :  d 
//Output :  Your exam at 10.30 AM 

#include<stdio.h>

void CheckDivison(char cValue)
{
	switch (cValue)
	{
		case 'A' :
		case 'a' :
		    printf("7 AM");
			break;
			
	    case 'B' :
		case 'b' :
		    printf("8:30 AM");
			break;
			
		case 'C' :
		case 'c' :
		    printf("9:20 AM");
			break;
			
		case 'D' :
		case 'd' :
		    printf("10:30 AM");
			break;
			
	    default:
		    printf("Invalid Input");
		
	}

}

int main()
{
	char cValue= '\0';
	
	printf("Enter One Character\t");
	scanf("%c",&cValue);
	
	CheckDivison(cValue);
	
	
	return 0;
}