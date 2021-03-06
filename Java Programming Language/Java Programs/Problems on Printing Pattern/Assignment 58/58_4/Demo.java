
//////////////////////////////////////////////////// 
//
//  Function Name:  Pattern.
//  Parameters:     Integer, Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           31 September 2020
//
//////////////////////////////////////////////////// 

/* Write Java program which accept number of rows and number of columns from
   user and display below pattern. 

Input :  iRow = 3  iCol = 4  
 
Output : *   #   *   #
         *   #   *   # 
		 *   #   *   # 
*/
 

import java.lang.*;
import java.util.*;

class PatternDemo
{
	void Pattern(int iRow, int iCol)
	{
		int i= 0;
		int j= 0;
		
		if((iRow<0)||(iCol<0))
		{
			iCol= -iCol;
			iRow= -iRow;
		}
		
		for(j=1;j<=iRow;j++)
		{
			
			for(i=1;i<=iCol;i++)
			{
				if(i%2==0)
				{
					System.out.print("#  ");
				}
				else if(i%2!=0)
				{
					System.out.print("*  ");
				}
				
			}
			
			System.out.println();
			
		}
		
	}
}

class Demo
{
	public static void main(String args[])
	{
		Scanner sobj= new Scanner(System.in);
		
		System.out.println("Enter Number of Rows");
		
		int iRow= sobj.nextInt();
		
		System.out.println("Enter Number of Column");
		
		int iCol= sobj.nextInt();

		PatternDemo obj= new PatternDemo();
		
		obj.Pattern(iRow,iCol);		
	}
}
