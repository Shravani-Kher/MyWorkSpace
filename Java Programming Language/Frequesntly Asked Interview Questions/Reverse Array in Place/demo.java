import java.lang.*;
import java.util.*;

class Array
{
	void Reverse(int arr[])
	{
		int temp = 0,i=0,j=0;
		
		for(i=0,j=arr.length-1;i<j;i++,j--)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		
		for(int k=0;k<arr.length;k++)
		{
			System.out.print(" "+arr[k]);
		}
	}
}

class demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter total Number of Elements");
		int iNo = sobj.nextInt();
		
		int arr[] = new int[iNo];
		
		System.out.println("Enter elements");
		
		for(int i=0;i<arr.length;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		Array obj = new Array();
		
		obj.Reverse(arr);
	}
}