import java.lang.*;
import java.util.*;

class Palindrome
{
	boolean Check(String str)
	{
		StringBuilder sb = new StringBuilder(str);
		
		sb.reverse();
		
		String rev = sb.toString();
		  
		
		if(str.equals(rev))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the String");
	   String str = sobj.nextLine();
	   
	   Palindrome pobj = new Palindrome();
	   
	   boolean Ans = false;
	   
	   Ans = pobj.Check(str);
	   
	   if(Ans == true)
	   {
		   System.out.println("String is Palindrome");
	   }
	   else
	   {
		   System.out.println("String is Not Palindrome");
	   }
	   
    }
}