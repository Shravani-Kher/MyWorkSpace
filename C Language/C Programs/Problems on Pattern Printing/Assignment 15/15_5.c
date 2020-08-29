
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
 
//Input :  iRow = 3  iCol =  4  

//Output : 1   2   3   4   
//         5   6   7   8   
//         9   10  11 12 

#include<stdio.h>

void DisplayPattern(int iRow, int iColumn)
{
	int i= 0;
	int j= 0;
	int iAns= 1;
	
	if((iRow<0)||(iColumn<0))
	{
		iRow=-iRow;
		iColumn=-iColumn;
	}
	
		for(j=1;j<=iColumn*iRow;j++)
		{
			printf("%d\t",j);
			if(j%iColumn==0)
			{
				printf("\n");
			}
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