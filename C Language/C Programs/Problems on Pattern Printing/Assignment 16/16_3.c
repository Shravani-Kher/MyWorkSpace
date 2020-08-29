
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

//Input :  iRow = 5  iCol = 5  

//Output : a   b   c   d   e   
//         1   2   3   4   5  
//         a   b   c   d   e   
//         1   2   3   4   5
//         a   b   c   d   e 

#include<stdio.h>

void DisplayPattern(int iRow, int iColumn)
{
	int i= 0;
	int j= 0;
	int k= 0;
	int iAns= 1;
	
	if((iRow<0)||(iColumn<0))
	{
		iRow=-iRow;
		iColumn=-iColumn;
	}
	
	
	for(i=1;i<=iRow;i++)
	{
		if(i%2!=0)
		{
		    for(j=0;j<iColumn;j++)
		    {
			    
			       printf("%c\t",97+j);
			   
		    }  printf("\n");
		}
		        
		else
		{
		    for(k=1;k<=iColumn;k++)
		    {
			   
			        printf("%d\t",k);
			    
		    }  printf("\n");
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