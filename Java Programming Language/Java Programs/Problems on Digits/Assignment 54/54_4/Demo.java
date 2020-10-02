
//////////////////////////////////////////////////// 
//
//  Function Name:  Multiplication.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           30 September 2020
//
//////////////////////////////////////////////////// 

 
/*Write a program which accept number from user and return multiplication of all digits. 

Input  :  2395  
Output :  270 

Input  :  1018 
Output :  8 

Input  :  9440 
Output :  144 

Input  :  922432 
Output :  864*/
  

import java.lang.*;
import java.util.*;

class Count
{
	int Multiplication(int iNo)
	{
		int iAns= 1;
		
		while(iNo!=0)
		{
			int iDigit= iNo%10;
			if(iDigit==0)
			{
				iDigit=1;
			}
			iAns= iAns*iDigit;
			iNo= iNo/10;
		}
		
		return iAns;
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
		
		iRet= cobj.Multiplication(iNo);
		
		System.out.println("Multiplication of all Digits is: "+iRet);
	}
}
