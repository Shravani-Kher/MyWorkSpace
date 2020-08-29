
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayPattern.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           11 August 2020
//
//////////////////////////////////////////////////// 

/* Accept number from user and display below pattern.*/
 
//Input :  5  
//Output : 5 # 4 # 3 # 2 # 1 # 

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int iCnt= 0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d",iCnt);
		printf("#");
	}
}

int main()
{ int iValue= 0;

  printf("Enter the Number");
  scanf("%d",&iValue);
  
  DisplayPattern(iValue);
  
  return 0;

}