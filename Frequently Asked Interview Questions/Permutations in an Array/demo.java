import java.lang.*;
import java.util.*;

class Permutation
{
	
	void Print(int arr[], int n)  
	{  
		for (int i = 0; i < n; i++)  
		{	
			System.out.print(arr[i] + " ");  
			//throws the cursor to the next line   
        }
		
		System.out.println(" ");
	}
	
	void Find(int arr[],int size,int n)
	{
		if(size==0)
		{
			Print(arr,n);
		}
		
		for (int i = 0; i < size; i++)   
		{  
			Find(arr, size - 1, n);  
			
			if (size % 2 == 1)   
			{  
				//performing swapping     
				int temp = arr[0];  
				arr[0] = arr[size - 1];  
				arr[size - 1] = temp;  
			}  
			else   
			{  
				//taking a temp variable for swapping     
				int temp;  
				//performing swapping   
				temp = arr[i];  
				arr[i] = arr[size - 1];  
				arr[size - 1] = temp;  
			}  
		}  
	}  
	
}

class demo
{
	public static void main(String args[])  
	{   
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number of Array Elements");
		int N = sobj.nextInt();
		
		int arr[] = new int[N];

		for(int i=0;i<N;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		Permutation obj = new Permutation();
		
		obj.Find(arr,arr.length,arr.length);
		
		//p.findPermutation(array, array.length, array.length);  
	}  
}