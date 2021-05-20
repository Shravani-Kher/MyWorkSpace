import java.lang.*;
import java.util.*;

class Sorting
{
	void BubbleSort(int arr[])
	{	
		int temp = 0;
	
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<=arr.length-2;j++)
			{
				if(arr[j]>arr[j+1])
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		
		System.out.println("\n");
		
		for(int i=0;i<arr.length;i++)
		{
			System.out.println(" "+arr[i]);
		}
	}
}

class demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Total Number of Elements");
		int Size = sobj.nextInt();
		
		int arr[] = new int[Size];
		
		System.out.println("Enter Elements\n");
		
		for(int i=0;i<Size;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		Sorting obj = new Sorting();
		
		obj.BubbleSort(arr);
	}
}