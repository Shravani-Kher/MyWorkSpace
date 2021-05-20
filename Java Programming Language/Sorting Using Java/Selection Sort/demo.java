import java.lang.*;
import java.util.*;

class Sorting
{
	void SelectionSort(int arr[])
	{	
		int Small=0,temp=0,Index=0;
	
		for(int i=0;i<arr.length;i++)
		{
			Small = arr[i];
			
			for(int j=i;j<arr.length;j++)
			{
				if(Small>arr[j])
				{
					Small = arr[j];
					Index = j;
					
					temp = arr[i];
					arr[i] = Small;
					arr[Index] = temp;
				}
			}
			
		}
		
		System.out.println("\n");
		
		for(int i=0;i<arr.length;i++)
		{
			System.out.println(arr[i]);
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
		
		obj.SelectionSort(arr);
	}
}