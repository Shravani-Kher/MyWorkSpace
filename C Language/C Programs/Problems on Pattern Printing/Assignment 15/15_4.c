
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayPattern.
//  Parameters:     Integer, Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           11 August 2020
//
////////////////////////////////////////////////////

/*Accept number of rows and number of columns from user and display below pattern.*/
 
//Input :  iRow = 4  iCol = 5  

//Output : 4   4   4   4   4  
//         3   3   3   3   3  
//         2   2   2   2   2   
//         1   1   1   1   1 

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
	
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=iColumn;j++)
		{
			printf("%d\t",i);
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