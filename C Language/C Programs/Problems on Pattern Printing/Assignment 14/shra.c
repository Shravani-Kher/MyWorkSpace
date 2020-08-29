#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
	int i= 0;
	int j= 0;
	int iAns= 1;
	
	if((iRow<0)||(iColumn<0))
	{
		iRow=-iRow;
		iColumn=-iColumn;
	}
	  for(i=1;i<=iRow;i++)
	  {
		  
		for(j=1;j<=9;j++)
		{
			if(j>9)
			{
				j=1;
			}
			printf("%d\t",j);
			
			if(j%iColumn==0)
			{
				printf("\n");
			}
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
  
  Pattern(iValue1,iValue2);
  
  return 0;

}