/*You are a professional robber planning to rob houses along a street.
 Each house has a certain amount of money stashed, the only constraint 
 stopping you from robbing each of them is that adjacent houses have security 
 systems connected and it will automatically contact the police if two adjacent
 houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house,
 return the maximum amount of money you can rob tonight without alerting the police*/

import java.lang.*;
import java.util.*;

class HouseRobber
{
	void HouseRobber(int arr[])
	{
		int iCnt = 0;
		
		for(int i=0;i<arr.length;i=i+2)
		{
			iCnt = iCnt+arr[i];
		}
		
		System.out.println("\n"+iCnt);
	}
}

class demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter total Number of Houses");
		int No = sobj.nextInt();
		
		int arr[] = new int[No];
		
		System.out.println("Enter House Numbers");
		
		for(int i=0;i<No;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		HouseRobber obj = new HouseRobber();
		
		obj.HouseRobber(arr);
	}
	
}