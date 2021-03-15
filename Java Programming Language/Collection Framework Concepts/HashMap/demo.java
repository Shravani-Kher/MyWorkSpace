import java.lang.*;
import java.util.*;

class demo
{
	public static void main(String args[])
	{
		Scanner sobj= new Scanner(System.in);
		                       //object
		HashMap<Integer,Integer> hm = new HashMap<Integer,Integer>();
		
		//To Add Elements in HashMap
		
		hm.put(1,10);
		hm.put(2,20);
		hm.put(3,30);
		hm.put(4,40);
		hm.put(5,50);
		hm.put(6,60);
		hm.put(7,70);
		hm.put(8,80);
		hm.put(9,90);
		hm.put(10,100);
		
		//To Display the the Elements of HashMap
		
		System.out.println(hm);
		
		// To Remove an Element from HashMap
		
		hm.remove(4);
		hm.remove(10);
		
		System.out.println("After Removing the Elements");
		System.out.println(hm);
		
		// Iterating HashMap 
		
		System.out.println("Syntax: Iterator<Wrapper Class of Key> Object = HashMap Object.keySet.iterator()");
		              
		Iterator<Integer> it= hm.keySet().iterator();
		
		while(it.hasNext())
		{
			Integer key= it.next();
			Integer value= hm.get(key);
			System.out.println(value);
		}
		
		//To get a Value at Specific Key
		
		System.out.println("Syntax: object.get(key)");
		
		hm.get(1);
		
		//To Replace Value
		
		System.out.println("Syntax: object.replace(key,value)");
		
		hm.replace(2,200);
		
		System.out.println(hm.get(2));
		
		// To Replace an Old Value with New Value
		
		System.out.println("Syntax: object.replace(key, old value, new value)");
		
		hm.replace(3,30,300);
		
		System.out.println(hm.get(3));
		
		// To find Total Number of Elements in HashMap
		
		System.out.println(hm.size());
		
		
	}
}