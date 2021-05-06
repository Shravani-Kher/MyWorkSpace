import java.lang.*;
import java.util.*;

class Anagram
{
	boolean ChkAnagram(String str1, String str2)
	{
		int iCnt =0;
		
		for(int i=0;i<str1.length();i++)
		{
			for(int j=0;j<str2.length();j++)
			{
				if(str1.charAt(i)==str2.charAt(j))
				{
					iCnt++;
				}
			}
		}
		
		if(iCnt==str1.length())
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
		
		System.out.println("Enter First String");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter Second String");
		String str2 = sobj.nextLine();
		
		Anagram obj = new Anagram();
		
		boolean Ans = false;
		
		Ans = obj.ChkAnagram(str1,str2);
		
		if(Ans==true)
		{
			System.out.println("The Strings are Anagram");
		}
		else
		{
			System.out.println("The Strings are not Anagram");
		}
		
	}
}