import java.lang.*;
import java.util.*;

class DuplicateNumber
{
	void DuplicateNumber(int arr[])
	{
		boolean Flag = false;
		
		System.out.println("--------------------------------");
		
		for(int i=0;i<arr.length;i++)
		{
			Flag = false;
			
			for(int j=0;j<arr.length;j++)
			{
				if((i!=j)&&(arr[i]==arr[j]))
				{
					Flag = true;
				}
			}
			
			if(Flag == true)
			{
				System.out.println(arr[i]);
			}
		}
	}
}

class demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the Number of Elements");
		int iNo = sobj.nextInt();
		
		int arr[] = new int[iNo];
		
		System.out.println("Enter elements: ");
		
		for(int i=0;i<arr.length;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		DuplicateNumber obj = new DuplicateNumber();
		
		obj.DuplicateNumber(arr);
	}
}