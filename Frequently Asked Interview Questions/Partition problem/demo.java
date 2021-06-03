import java.lang.*;
import java.util.*;

class Partition
{
	void Partition(int arr[])
	{
		int Largest = arr[0],index=0;
		
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]>Largest)
			{
				Largest = arr[i];
				index = i;
			}
		}
		
		int Ans=0;
		
		for(int i=0;i<arr.length;i++)
		{
			if(i!=index)
			{
				Ans = arr[i]+Ans;
			}
		}
		
		if(Ans == Largest)
		{
			System.out.println("True");
		}
		else
		{
			System.out.println("False");
		}
		
		
	}
}

class demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter total Number of Elements");
		int Total = sobj.nextInt();
		
		int arr[] = new int[Total];
		
		for(int i=0;i<Total;i++)
		{
			arr[i] = sobj.nextInt();
		}
			
		Partition obj = new Partition();
		
		obj.Partition(arr);
	
		
	}
}