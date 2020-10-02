
//////////////////////////////////////////////////// 
//
//  Function Name:  CountSmall.
//  Parameters:     String.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           31 September 2020
//
//////////////////////////////////////////////////// 

 
/*Write a java  program which accept string from user and count number of small characters. 

Input :   Marvellous 

Output :   9*/
  

import java.lang.*;
import java.util.*;

class StringDemo
{
	int CountSmall(String str)
	{
		char arr[]= str.toCharArray();
		
		int i= 0, CountSm= 0;
		
		for(i=0;i<arr.length;i++)
		{
			if((arr[i]>='a')&&(arr[i]<='z'))
			{
				CountSm++;
			}
		}
		
		return CountSm;
	}
}

class Demo
{
	public static void main(String args[])
	{
		Scanner sobj= new Scanner(System.in);
		
		System.out.println("Enter the String");
		
		String str = sobj.nextLine(); 
		
		StringDemo obj= new StringDemo();
		
		int ret=obj.CountSmall(str);
		
		System.out.println("Number of Small characters are: "+ret);
	}
}
