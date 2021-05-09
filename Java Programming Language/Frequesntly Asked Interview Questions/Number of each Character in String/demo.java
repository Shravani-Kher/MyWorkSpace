import java.lang.*;
import java.util.*;

class Check
{
	void Repeated(String str)
	{
		HashMap<Character,Integer> hm = new HashMap<Character,Integer>();
		
		char arr[] = str.toCharArray();
		
		for(char c: arr)
		{
			if(hm.containsKey(c))
			{
				hm.put(c,hm.get(c)+1);
			}
			else if(hm.containsKey(" "))
			{
				continue;
			}
			else
			{
				hm.put(c,1);
			}
		}
		
		System.out.println(hm);
	}
}

class demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter one String");
		String str = sobj.nextLine();
		
		Check obj = new Check();
		
		obj.Repeated(str);
		
	}
}