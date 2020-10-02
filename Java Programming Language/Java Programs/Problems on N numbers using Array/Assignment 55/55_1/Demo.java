
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkNo.
//  Parameters:     Integer,Integer,Array.
//  Return Value:   Boolean.
//  Author:         Shravani Vinod Kher
//  Date:           30 September 2020
//
//////////////////////////////////////////////////// 

 
/* Write java program which accept N numbers from user and accept one another number as NO ,
 check whether NO is present or not. 

Input :  N :   6 
NO:  66 
Elements : 85 66 3 66 93 88  
Output : TRUE 

Input :  N :   6 
NO:  12 
Elements : 85 11 3 15 11 111  
Output : FALSE */
  

import java.lang.*;
import java.util.*;

class Check
{
	Boolean ChkNo(int arr[],int iSize,int iNo)
	{
		int i=0;
		
		for(i=0;i<iSize;i++)
		{
			if(arr[i]==iNo)
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
		
		System.out.println("Enter Number to Search");
		
		int iNo= sobj. nextInt();
		
		Check cobj= new Check();
		
		Boolean bRet= false;
		
		bRet=cobj.ChkNo(arr,iSize,iNo);
		
		System.out.println(bRet+" ");
	}
}
