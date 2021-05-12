import java.lang.*;
import java.util.*;

class ArrayWave
{
	void ArrayWave(int arr[])
	{
		int temp = 0;
		
		if(arr.length%2==0)
		{
			for(int i=0;i<arr.length-1;i++)
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		else
		{
			for(int i=0;i<arr.length-2;i++)
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
			
		}
		
		for(int i=0;i<arr.length;i++)
		{
			System.out.print("\n"+arr[i]);
		}
	}
}

class demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Total Number of Elements");
		int No = sobj.nextInt();
		
		int arr[] = new int[No];
		
		System.out.println("Enter Array Elements");
		
		for(int i=0;i<No;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		ArrayWave obj = new ArrayWave();
		
		obj.ArrayWave(arr);
	}
}