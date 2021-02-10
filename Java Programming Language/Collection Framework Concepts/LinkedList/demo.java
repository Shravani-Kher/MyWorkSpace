import java.lang.*;
import java.util.*;
import java.io.*;


class demo
{
	public static void main(String args[])
	{
		
	// GENERIC LINKEDLIST:
	
		LinkedList ll = new LinkedList();
		
		// To add elements in LinkedList:
		
		ll.add(10);
		ll.add(20);
		ll.add(30);
		ll.add(40);
		ll.add(50);
		ll.add(60);
		ll.add(70);
		ll.add(80);
		ll.add(90);
		ll.add(100);
		
		// To print all elements of LinkedList:
		
		System.out.println("Contents of LinkedList: ",ll);
		
		// To add element at First position:
		
		ll.addFirst(101);
		
		// To add element at Last position:
		
		ll.addLast(200);
		
		// To get the element on First index of LinkedList:
		
		System.out.println("First element of LinkedList is: "+ll.getFirst());
		
		// To get the element on Last index of LinkedList:
		
		System.out.println("Last element of LinkedList is: "+ll.getLast());
		
		// To remove an element from specific index:
		
		ll.remove(5);
		
		// To remove First element of LinkedList:
		
		ll.removeFirst();
		
		// To remove Last element of LinkedList:
		
		ll.removeLast();
		
		// To calculate No. of elements in LinkedList:
		
		System.out.println(ll.size());
		
		// To print contents of LinkedList using loop:

			for(int i=0;i<ll.size();i++)
			{
				System.out.println(ll.get(i));
			}
	}
}