
//////////////////////////////////////////////////// 
//
//  Function Name:  CountSmall.
//  Parameters:     String.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           31 September 2020
//
//////////////////////////////////////////////////// 

 
/*Write a java program which accept string from user and return difference between 
  frequency of small characters and frequency of capital characters.                                            

Input :   MarvellouS 

Output :   6 (8-2) */
  

import java.lang.*;
import java.util.*;

class StringDemo
{
	int CountDiff(String str)
	{
		char arr[]= str.toCharArray();
		
		int i= 0, CountSm= 0, CountCap= 0;
		
		for(i=0;i<arr.length;i++)
		{
			if((arr[i]>='a')&&(arr[i]<='z'))
			{
				CountSm++;
			}
			else if((arr[i]>='A')&&(arr[i]<='Z'))
			{
				CountCap++;
			}
		}
		
		return CountCap-CountSm;
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
		
		int ret=obj.CountDiff(str);
		
		System.out.println("Difference in Frequency of Small and Capital Characters is : "+ret);
	}
}
