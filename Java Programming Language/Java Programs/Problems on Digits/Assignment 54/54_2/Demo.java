
//////////////////////////////////////////////////// 
//
//  Function Name:  Odd.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           30 September 2020
//
//////////////////////////////////////////////////// 

 
/*Write a program which accept number from user and return the count of odd digits. 

Input  :  2395  
Output :  3 

Input  :  1018 
Output :  2 

Input  :  -1018 
Output :  2 

Input  :  8462 
Output :  0*/
  

import java.lang.*;
import java.util.*;

class Count
{
	int Odd(int iNo)
	{
		int iCnt= 0;
		
		while(iNo!=0)
		{
			int iDigit= iNo%10;
			if(iDigit%2!=0)
			{
				iCnt++;
			}
			iNo= iNo/10;
		}
		
		return iCnt;
	}
}

class Demo
{
	public static void main(String args[])
	{
		System.out.println("Enter Number");
		
		Scanner sobj= new Scanner(System.in);
		
		int iNo = sobj. nextInt();
		
		Count cobj= new Count();
		
		int iRet= 0;
		
		iRet= cobj.Odd(iNo);
		
		System.out.println("Number of Odd Digits are: "+iRet);
	}
}
