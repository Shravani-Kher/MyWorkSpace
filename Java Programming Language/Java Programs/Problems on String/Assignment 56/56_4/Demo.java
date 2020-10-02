
//////////////////////////////////////////////////// 
//
//  Function Name:  CountSmall.
//  Parameters:     String.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           31 September 2020
//
//////////////////////////////////////////////////// 

/*Write a java program which accept string from user and check whether 
  it contains vowels in it or not. 

Input  :   marvellous 
Output :   TRUE 

Input  :   Demo 
Output :   TRUE 

Input  :   xyz
Output :   FALSE  */
 

import java.lang.*;
import java.util.*;

class StringDemo
{
	Boolean ChkVowel(String str)
	{
		char arr[]= str.toCharArray();
		
		int i= 0;
		
		for(i=0;i<arr.length;i++)
		{
			if((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u'))
			{
				return true;
			}
			else if((arr[i]=='A')||(arr[i]=='E')||(arr[i]=='I')||(arr[i]=='O')||(arr[i]=='U'))
			{
				return true;
			}
		}
		
		return false;
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
		
		Boolean ret=obj.ChkVowel(str);
		
		System.out.println(" "+ret);
	}
}
