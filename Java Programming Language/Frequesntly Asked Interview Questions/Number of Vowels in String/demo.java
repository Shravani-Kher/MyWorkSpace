import java.lang.*;
import java.util.*;

class Checkvowels
{
	int vowels(String str)
	{
		int iCnt=0;
		
		for(int i=0;i<str.length();i++)
		{
			if((str.charAt(i)=='a')||(str.charAt(i)=='e')||(str.charAt(i)=='i')||(str.charAt(i)=='o')||(str.charAt(i)=='u'))
			{
				iCnt++;
			}
			else if((str.charAt(i)=='A')||(str.charAt(i)=='E')||(str.charAt(i)=='I')||(str.charAt(i)=='O')||(str.charAt(i)=='U'))
			{
				iCnt++;
			}
		}
		
		return iCnt;
	}
}

class demo
{
	public static void main(String args[])
	{
		Scanner sobj =  new Scanner(System.in);
		
		System.out.println("Enter one String");
		String str = sobj.nextLine();
		
		int iAns = 0;
		
		Checkvowels obj = new Checkvowels();
		
		iAns = obj.vowels(str);
		
		System.out.println("Number of Vowels in String are: "+iAns);
	}
}