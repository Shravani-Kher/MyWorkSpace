
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayPattern.
//  Parameters:     Integer,Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           11 August 2020
//
//////////////////////////////////////////////////// 

/*Accept number of rows and number of columns from user and display below pattern.*/
 
//Input :  iRow = 3  iCol = 4  

//Output : *   #   *   #    
//         *   #   *   #    
//         *   #   *   #

#include<stdio.h>

void DisplayPattern(int iRow, int iColumn)
{
	int i= 0;
	int j= 0;
	
	for(i=1;i<=iRow;i++)
	{
	    for(j=iColumn;j>=1;j--)
	    {
	       if(j%2==0)
		   {
			    printf("*\t");
		   }
		   else
		   {
			    printf("#\t");
		   }
	   
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