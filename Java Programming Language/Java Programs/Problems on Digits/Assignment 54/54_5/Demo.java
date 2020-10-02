
//////////////////////////////////////////////////// 
//
//  Function Name:  Summation.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           30 September 2020
//
//////////////////////////////////////////////////// 

 
/*Write a program which accept number from user and return difference between 
  summation of even digits and summation of odd digits. 

Input  :  2395  
Output :  -15 (2 - 17) 

Input  :  1018 
Output :  6 (8 - 2) 

Input  :  8440 
Output :  16  (16 - 0) 

Input  :  5733 
Output :  -18 (0 - 18) */
  

import java.lang.*;
import java.util.*;

class Difference
{
	int Summation(int iNo)
	{
		int iEven= 0;
		int iOdd= 0;
		
		while(iNo!=0)
		{
			int iDigit= iNo%10;
			if(iDigit%2==0)
			{
				iEven= iEven+iDigit;
			}
			else
			{
				iOdd= iOdd+iDigit;
			}
			iNo= iNo/10;
		}
		
		return iEven-iOdd;
	}
}

class Demo
{
	public static void main(String args[])
	{
		System.out.println("Enter Number");
		
		Scanner sobj= new Scanner(System.in);
		
		int iNo = sobj. nextInt();
		
		Difference dobj= new Difference();
		
		int iRet= 0;
		
		iRet= dobj.Summation(iNo);
		
		System.out.println("The Difference is: "+iRet);
	}
}
