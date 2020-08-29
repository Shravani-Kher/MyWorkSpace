
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

//Output : 2   4   6   8   10  
//         1   3   5   7   9   
//         2   4   6   8   10   
//         1   3   5   7   9 

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
		    for(j=2;j<=(iColumn*2);j++)
		    {
			    if(j%2==0)
			   {
			       printf("%d\t",j);
			   }
		    }  printf("\n");
		}
		        
		else
		{
		    for(k=1;k<=(iColumn*2);k++)
		    {
			    if(k%2!=0)
			    {
			        printf("%d\t",k);
			    }
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