import java.lang.*;
import java.util.*;

class demo
{
	public static void main(String args[])
	{
		Scanner sobj= new Scanner(System.in);
		
		Hashtable<Integer,String> ht= new Hashtable<Integer,String>();
		
		//To Add Elements in Hashtable
		
		ht.put(1,"Shravani");
		ht.put(2,"Tampu");
		ht.put(3,"Chutku");
		ht.put(4,"Manti");
		
		//Using Enumeration to print all elements of Hashtable
		
		System.out.println("Syntax: Enumeration obj(name) = hashtable(obj-name).elements()");
		
		Enumeration e= ht.elements();
		
		System.out.println("Syntax: Enumeration obj(name).hasMoreElements()");
		
		while(e.hasMoreElements())
		{
			System.out.println(e.nextElement());
		}
		
		//To to check if Hash table contains one specific value
		
		if(ht.containsValue("Shravani"))
		{
			System.out.println("Value Found");
		}
		
		//To print the value at specific key
		
		System.out.println(ht.get(2));
		
		//To replace a value at specific key
		
		ht.replace(2,"Tampudi");
		
		System.out.println(ht.get(2));
		
		//To remove a key from Hashtable
		
		ht.remove(4);
		
		//To get Number of Elements in the Hashtable
		
		System.out.println(ht.size());
		
	}
}