
//////////////////////////////////////////////////// 
//
//  Function Name:  Digit.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           30 September 2020
//
//////////////////////////////////////////////////// 

 
/*Write a program which accept number from user and return the count of digits in between 3 and 7. 

Input  :  2395  
Output :  1 

Input  :  1018 
Output :  0 

Input  :  4521 
Output :  2 

Input  :  9922 
Output :  0*/
  

import java.lang.*;
import java.util.*;

class Count
{
	int Digit(int iNo)
	{
		int iCnt= 0;
		
		while(iNo!=0)
		{
			int iDigit= iNo%10;
			if((iDigit>=3)&&(iDigit<=7))
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
		
		iRet= cobj.Digit(iNo);
		
		System.out.println("Number of Digits in between Three and Seven are: "+iRet);
	}
}
