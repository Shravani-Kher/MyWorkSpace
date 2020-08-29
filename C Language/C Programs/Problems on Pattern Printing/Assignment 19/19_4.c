
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

//Input :  iRow = 6  iCol = 6  

//Output : *   *   *   *   *   *   
//         *   #   #   #   *   *   
//         *   #   #   *   $   *   
//         *   #   *   $   $   *   
//         *   *   $   $   $   *   
//         *   *   *   *   *   * 

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i= 0;
    int j= 0;
	int k= 0;
	
	if(iRow!=iCol)
	{
		printf("Please Enter Square Matrix\n");
	}
	
	if((iRow<0)||(iCol<0))
	{
		iRow=-iRow;
		iCol=-iCol;
	}
	            
	for(i=1;i<=iRow;i++)
	{  
   
		for(j=1;j<=iCol;j++)
		{
            if((i==iRow)||(j==iCol)||(j==1)||(i==1)||(j+i==iCol+1))
			{			
			    printf("*\t");
			}
			else if(i+j<=iCol)
			{
				printf("#\t");
			}
			else
			{
				printf("$\t");
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