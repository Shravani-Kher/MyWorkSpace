
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkNo.
//  Parameters:     Integer,Integer,Array.
//  Return Value:   Boolean.
//  Author:         Shravani Vinod Kher
//  Date:           30 September 2020
//
//////////////////////////////////////////////////// 

 
/* Write java program which accept N numbers from user and accept Range,
 Display all elements from that range 

Input :  N :   6 
Start: 60     
End :  90     
Elements : 85 66 3 76 93 88  
Output : 66 76 88 

Input :  N :   6 
Start: 30     
End :  50     
Elements : 85 66 3 76 93 88  
Output :  */
  

import java.lang.*;
import java.util.*;

class Range
{
	void Display(int arr[],int iSize,int iStart,int iEnd)
	{
		int i= 0;
		int iCnt= 0;
		
		for(i=0;i<iSize;i++)
		{
			if((arr[i]>=iStart)&&(arr[i]<=iEnd))
			{
				System.out.println(" "+arr[i]);
			}
		}
		
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
		
		System.out.println("Enter Starting Point of Range");
		
		int iStart= sobj. nextInt();
		
		System.out.println("Enter Ending Point of Range");
		
		int iEnd= sobj. nextInt();
		
		
		Range robj= new Range();
		
		int iRet= 0;
		
		robj.Display(arr,iSize,iStart,iEnd);
		
	}
}
