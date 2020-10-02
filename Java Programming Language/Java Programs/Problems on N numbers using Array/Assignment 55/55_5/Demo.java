
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkNo.
//  Parameters:     Integer,Integer,Array.
//  Return Value:   Boolean.
//  Author:         Shravani Vinod Kher
//  Date:           30 September 2020
//
//////////////////////////////////////////////////// 

 
/*  Write java program which accept N numbers from user and return product of all odd elements. 

Input :  N :   6     
Elements : 15 66 3 70 10 88                                            
Output : 45 

Input :  N :   6     
Elements : 44 66 72 70 10 88  
Output : 0 */
  

import java.lang.*;
import java.util.*;

class Product
{
	int Odd(int arr[],int iSize)
	{
		int i= 0;
		int iAns= 1;
		
		for(i=0;i<iSize;i++)
		{
			if((arr[i]%2)!=0)
			{
				iAns= iAns*arr[i];
			}
		}
		
		return iAns;
		
	}
	
}

class Demo
{
	public static void main(String args[])
	{
		System.out.println("Enter Number of Elements");
		
		Scanner sobj= new Scanner(System.in);
		
		int iSize= sobj.nextInt();
		
		int arr[]= new int[iSize];
		
		System.out.println("Enter the Elements");
		
		int i= 0;
		
		for(i=0;i<iSize;i++)
		{
			arr[i]= sobj. nextInt();
		}
		
		Product pobj= new Product();
		
		int iRet= 0;
		
		iRet= pobj.Odd(arr,iSize);
		
		System.out.println("Product of odd Elements is: "+iRet);
		
	}
}
