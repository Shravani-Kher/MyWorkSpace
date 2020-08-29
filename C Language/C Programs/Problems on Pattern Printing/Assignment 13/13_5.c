
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

//Input :  8 
//Output : 2 4 6 8 10 12 14 16 

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int iCnt= 0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=2;iCnt<=iNo*2;iCnt++)
	{
		if(iCnt%2==0)
		{
			printf("%d\t",iCnt);
		}
	}
	
}

int main()
{ int iValue= 0;

  printf("Enter the Number");
  scanf("%d",&iValue);
  
  DisplayPattern(iValue);
  
  return 0;

}