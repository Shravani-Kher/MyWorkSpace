
//////////////////////////////////////////////////// 
//
//  Function Name:  Pattern.
//  Parameters:     String.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           31 September 2020
//
//////////////////////////////////////////////////// 

/*Write Java program which accept String from user and display below pattern. 

Input :  Hello 

Output : H  e  l  l  o
         H  e  l  l
		 H  e  l
		 H  e
		 H
		 H  e
		 H  e  l
		 H  e  l  l
		 H  e  l  l  o   
*/
 

import java.lang.*;
import java.util.*;

class PatternDemo
{
	void Pattern(String str)
	{
		int i= 0;
		int j= 0;
		int x= 0;
		
		for(j=0;j<str.length();j++)
		{
			for(i=0;i<(str.length()-x);i++)
			{
				System.out.print(str.charAt(i)+" ");
			}
			x++;
			
			System.out.println();
		}
		
		for(j=1;j<str.length();j++)
		{
			for(i=0;i<=j;i++)
		    {
				System.out.print(str.charAt(i)+" ");
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
		
		System.out.println("Enter String");
		
		String str= sobj.nextLine();
		
		PatternDemo obj= new PatternDemo();
		
		obj.Pattern(str);		
	}
}
