
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkFees.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           18 August 2020
//
////////////////////////////////////////////////////

/*Design application for school management system.  As school is primary there are 4 standards 
from 1 to 4.  School fees of each standard is different.  For first standard fees are 8900, for 
second standard 12790, for third standard 21000 and for fourth standard fees are 23450.  We have 
to accept standard from user and display the corresponding fees. */

//Input : 2   
//Output : 12790 

//Input : 4   
//Output : 23450 

//Input : 6   
//Output : Wrong input 

#include<stdio.h>

void ChkFees(int  iStd)
{
	char ch= 64+iStd;
    switch (ch)
	{
		case 'A' :
		    printf("Total Amount of Fees is:\t 8900 ");
			break;
			
		case 'B' :
		    printf("Total Amount of Fees is:\t 12790");
			break;
			
		case 'C' :
		    printf("Total Amount of Fees is:\t 21000");
			break;
			
		case 'D' :
		    printf("Total Amount of Fees is:\t 23450");
			break;
			
		default :
		    printf("Wrong Option");
	}					
}

int main()
{
	int iStandard= 0;
	
	printf("Enter the Standard");
	scanf("%D",&iStandard);
	
	ChkFees(iStandard);
	
	return 0;
}