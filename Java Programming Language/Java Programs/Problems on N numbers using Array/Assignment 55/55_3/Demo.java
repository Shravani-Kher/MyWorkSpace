
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkNo.
//  Parameters:     Integer,Integer,Array.
//  Return Value:   Boolean.
//  Author:         Shravani Vinod Kher
//  Date:           30 September 2020
//
//////////////////////////////////////////////////// 

 
/*Write java program which accept N numbers from user and accept one another 
  number as NO , return index of last occurrence of that NO. 

Input :  N :   6 
NO:  66 
Elements : 85 66 3 66 93 88  
Output : 3 

Input :  N :   6 
NO:  93 
Elements : 85 66 3 66 93 88  
Output : 4 

Input :  N :   6 
NO:  12 
Elements : 85 11 3 15 11 111  
Output : -1 */
  

import java.lang.*;
import java.util.*;

class Check
{
	int Occurance(int arr[],int iSize,int iNo)
	{
		int i= 0;
		int iCnt= 0;
		
		for(i=0;i<iSize;i++)
		{
			if(arr[i]==iNo)
			{
				iCnt= i;
			}
		}
		
		return iCnt;
		
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
		
		System.out.println("Enter Number");
		
		int iNo= sobj. nextInt();
		
		Check cobj= new Check();
		
		int iRet= 0;
		
		iRet= cobj.Occurance(arr,iSize,iNo);
		
		System.out.println("Last Occurence is"+iRet);
		
		
	}
}
