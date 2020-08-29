
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
 
//Input :  iRow = 4  iCol =  4  

//Output : 1   2   3   4   
//         2   3   4   5    
//         3   4   5   6    
//         4   5   6   7 

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i= 0;
	int j= 1;
	
	if((iRow<0)||(iCol<0))
	{
		iRow=-iRow;
		iCol=-iCol;
	}
	
	
	for(i=0;i<=iRow;i++)
	{
		
		for(j=(i+1);j<=(iCol+i);j++)
		    {
			
			    printf("%d\t",j);
			   
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