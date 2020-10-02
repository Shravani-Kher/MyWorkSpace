
//////////////////////////////////////////////////// 
//
//  Function Name:  Display.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           30 September 2020
//
//////////////////////////////////////////////////// 

 
/*Write Java program which accept N numbers from user and display all such 
  elements which are divisible by 3 and 5.*/
  
//Input :  N :   6 
  
//Elements : 85 66 3 15 93 88  

//Output : 15   

import java.lang.*;
import java.util.*;

class Divisible
{
	void Display(int arr[],int iSize)
	{
		if(iSize<0)
		{
			iSize= -iSize;
		}
		
		int i= 0;
		
		System.out.println("Divisible Numbers are: ");
		
		for(i=0;i<iSize;i++)
		{
			if(((arr[i]%5)==0)&&((arr[i]%3)==0))
			{
				System.out.println(arr[i]+" ");
			}
			
		}
		
	}
}

class Demo
{
	public static void main(String args[])
	{
		System.out.println("Enter Number");
		
		Scanner sobj= new Scanner(System.in);
		int iSize= sobj.nextInt();
		
		int arr[]= new int[iSize];
		
		int i= 0;
		
		System.out.println("Enter Numbers");
		
		for(i=0;i<iSize;i++)
		{
			arr[i]= sobj.nextInt();
		}
		
		Divisible dobj= new Divisible();
		
		dobj.Display(arr,iSize);
		
	}
}
