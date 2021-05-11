import java.lang.*;
import java.util.*;

class Rotation
{
	void ArrayRotate(int arr[], int iNo)
	{
		int temp =0;
		
		for(int i=1;i<=iNo;i++)
		{
			temp = arr[arr.length-1];
			
			for(int j=arr.length-1;j>0;j--)
			{
				arr[j] = arr[j-1];
			}
			
			arr[0] = temp;
		}
		
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(" "+arr[i]);
		}
	}
}

class demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter total Number of Elements");
		int No = sobj.nextInt();
		
		int arr[] = new int[No];
		
		System.out.println("Enter the Elements of Array");
		
		for(int i=0;i<No;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		System.out.println("Number of Rotations");
		int iNo = sobj.nextInt();
		
		Rotation obj = new Rotation();
		
		obj.ArrayRotate(arr,iNo);
		
	}
}