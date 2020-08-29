
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayPattern.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           11 August 2020
//
//////////////////////////////////////////////////// 

/*Accept number from user and display below pattern. */

//Input :  5  
//Output : A B C D E 

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int i= 0;
	int iAns= 0;
	
	for(i=0;i<iNo;i++)
	{
		iAns= i+65;
		printf("%c\t",iAns);
	}
	
}

int main()
{ int iValue= 0;

  printf("Enter the Number");
  scanf("%d",&iValue);
  
  DisplayPattern(iValue);
  
  return 0;

}