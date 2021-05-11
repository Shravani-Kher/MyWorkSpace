import java.lang.*;
import java.util.*;

class Array
{
	void Missing(int arr[])
	{
		boolean Flag = false;
		
		for(int i=1;i<=100;i++)
		{
			Flag = false;
			
			for(int j=0;j<arr.length;j++)
			{
				if(i==arr[j])
				{
					Flag = true;
				}
			}
			
			if(Flag == false)
			{
				System.out.print(" "i);
			}
		}
	}
}

class demo
{
	public static void main(String args[]) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the total Number of Elements");
		int No = sobj.nextInt();
		
		int arr[] = new int[No];
		
		int No2 = 0;
		
		System.out.println("Enter elements of Array");
		
		for(int i=0;i<No;i++)
		{
			arr[i]= sobj.nextInt();
		}
		
		System.out.println(" ");
		
		Array obj = new Array();
		
		obj.Missing(arr);
	}
}