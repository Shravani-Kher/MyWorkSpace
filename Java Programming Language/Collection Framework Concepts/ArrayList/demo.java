import java.lang.*;
import java.util.*;
import java.io.*;

class demo
{
	public static void main(String args[])
	{
	
	// To Create Generic ArrayList:
	
		ArrayList arr = new ArrayList();
		
	// To Add Elements in ArrayList:
		
		arr.add(10);
		arr.add(20);
		arr.add(30);
		arr.add(40);
		arr.add(50);
		arr.add(60);
		arr.add(70);
		arr.add(80);
		arr.add(90);
		arr.add(100);
		
	// To Print all Elements of ArrayList:
		
		for(int i=0;i<arr.size();i++)
		{
			System.out.println(arr.get(i));
		}
		
	// To add element at specific position:
	
		arr.add(3,89);
		
	// To fetch the element from specific index:
	
		System.out.println(arr.get(5));
		
	// To remove element from specific index:
	
		arr.remove(6);
		
	// To get the number of elements in the Linked list:
	
		System.out.println(arr.size());
		

	}
}