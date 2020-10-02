
//////////////////////////////////////////////////// 
//
//  Function Name:  CountCapital.
//  Parameters:     String.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           31 September 2020
//
//////////////////////////////////////////////////// 

 
/*Write a Java program which accept string from user and count number of capital characters.*/ 

//Input  : "Marvellous Multi OS" //

//Output : 4
  

import java.lang.*;
import java.util.*;

class StringDemo
{
	int CountCapital(String str)
	{
		char arr[]= str.toCharArray();
		
		int i= 0, CountCap= 0;
		
		for(i=0;i<arr.length;i++)
		{
			if((arr[i]>='A')&&(arr[i]<='Z'))
			{
				CountCap++;
			}
		}
		
		return CountCap;
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
		
		int ret=obj.CountCapital(str);
		
		System.out.println("Number of Capital characters are: "+ret);
	}
}
