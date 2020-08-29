
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
//         a   b   c   d   
//         A   B   C   D    
//         a   b   c   d 

#include<stdio.h>

void DisplayPattern(int iRow, int iColumn)
{
	int i= 0;
	int j= 0;
	int k= 0;
	int iAns= 0;
	
	for(i=1;i<=iRow;i++)
	{
	   if(i%2!=0)
	   {
		   for(j=0;j<iColumn;j++)
		   {
			   iAns= 65+j;
			   printf("%c\t",iAns);
		   }
	   }
		else
		{
			for(k=0;k<iColumn;k++)
			{
				iAns= 97+k;
				printf("%c\t",iAns);
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