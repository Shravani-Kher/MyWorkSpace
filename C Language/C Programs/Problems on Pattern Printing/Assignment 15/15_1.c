
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
 
//Input :  iRow = 4  iCol = 4  

//Output : A   B   C   D   
//         A   B   C   D   
//         A   B   C   D   
//         A   B   C   D

#include<stdio.h>

void DisplayPattern(int iRow, int iColumn)
{
	int i= 0;
	int j= 0;
	int iAns= 0;
	
	for(i=1;i<=iRow;i++)
	{
	    for(j=0;j<=iColumn;j++)
	    {
	       iAns= 65+j;
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