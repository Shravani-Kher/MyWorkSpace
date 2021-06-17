import java.lang.*;
import java.util.*;

class Character
{
	void Cross(String str)
	{
		int i=0, j= str.length()-1;
		
		while((i<str.length())&&(j>=0))
		{
			if(i<j)
			{
				System.out.print(str.charAt(i)+""+str.charAt(j));
			}
			else if(i==j)
			{
				System.out.print(" "+str.charAt(i)+" ");
			}
			else
			{
				System.out.print(str.charAt(j)+""+str.charAt(i));
			}
			i++;
			j--;
		}
	}
}

class demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String");
		String str = sobj.nextLine();
		
		Character obj = new Character();
		
		obj.Cross(str);
	}
}