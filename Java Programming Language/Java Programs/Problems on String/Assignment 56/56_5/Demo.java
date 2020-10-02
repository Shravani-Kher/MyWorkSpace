
//////////////////////////////////////////////////// 
//
//  Function Name:  CountSmall.
//  Parameters:     String.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           31 September 2020
//
//////////////////////////////////////////////////// 

/*Write a java program which accept string from user and display it in reverse order. 

Input  :   MarvellouS 

Output :   SuollevraM */
 

import java.lang.*;
import java.util.*;

class StringDemo
{
	void Reverse(String str)
	{
		char arr[]= str.toCharArray();
		
		int i= 0, iCnt= 0;
		
		iCnt= (arr.length-1);
		
		char temp= '\0';
		
		while(i<iCnt)
		{
			temp= arr[i];
		
		    arr[i]= arr[iCnt];
		
		    arr[iCnt]= temp;
			i++;
			iCnt--;
		}
		
		System.out.println(arr);
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
		
		obj.Reverse(str);
		
	}
}
