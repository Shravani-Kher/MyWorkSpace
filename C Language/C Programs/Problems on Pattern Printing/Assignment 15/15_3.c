
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayPattern.
//  Parameters:     Integer, Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           11 August 2020
//
//////////////////////////////////////////////////// 

/*Accept number of rows and number of columns from user and display below pattern. */

//Input :  iRow = 3  iCol = 5  

//Output : A   A   A   A   A   
//         B   B   B   B   B   
//         C   C   C   C   C 

#include<stdio.h>

void DisplayPattern(int iRow, int iColumn)
{
	int i= 0;
	int j= 0;
	int iAns= 0;
	
	if((iRow<0)||(iColumn<0))
	{
		iRow=-iRow;
		iColumn=-iColumn;
	}
	
	for(i=0;i<=iRow;i++)
	{
		for(j=0;j<iColumn;j++)
		{
			iAns= 65+i;
			printf("%c\t",iAns);
		}
	   
	   printf("\n");
	}
}

int main()
{ 
  int iValue1= 0;
  int iValue2= 0;

  printf("Enter the Number of Rows");
  scanf("%d",&iValue1);
  
  printf("Enter the Number of Column");
  scanf("%d",&iValue2);
  
  DisplayPattern(iValue1,iValue2);
  
  return 0;

}