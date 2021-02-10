import java.lang.*;
import java.util.*;
import java.io.*;

class Employee
{
	String name;
	int age;
	String dept;
	
	Employee(String name, int age, String dept)
	{
		this.name= name;
		this.age= age;
		this.dept= dept;
	}
}


class demo
{
	public static void main(String args[])
	{
	
	// GENERIC ARRAYLIST:
	
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
		
	// NON-GENERIC ARRAYLIST:
	
		Employee e1= new Employee("Shravani", 22, "Student");
		Employee e2= new Employee("Vrushali", 56, "Teacher");
		Employee e3= new Employee("Tampu", 35, "Cat");
		Employee e4= new Employee("Chutku", 34, "Soilder");
		
		ArrayList<Employee> em = new ArrayList<Employee>();
		
		em.add(e1);
		em.add(e2);
		em.add(e3);
		em.add(e4);
		
		// Iterator to traverse the values:
		
		Iterator<Employee> it = em.iterator();
		
		while(it.hasNext())
		{
			Employee emp= it.next();
			
			System.out.println(emp.name+" "+emp.age+" "+emp.dept);
		}
	}
}