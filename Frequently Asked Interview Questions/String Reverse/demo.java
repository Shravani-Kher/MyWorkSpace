import java.lang.*;
import java.util.*;

class Reverse
{
	void Rev(String str)
	{
		StringBuilder ab = new StringBuilder(str);
		
		ab.reverse();
		
		String abc = ab.toString();
		
		System.out.println(abc);
	}
}

class demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the String");
		String str = sobj.nextLine();
		
		Reverse obj = new Reverse();
		
		obj.Rev(str);
	}
}