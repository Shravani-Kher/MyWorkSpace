import java.lang.*;
import java.util.*;

class Conversion
{
	String ArrayToString(Integer Array[])
	{
		String str= Arrays.toString(Array);
	
		return str;
	}
	
	void StringToArray(String atr)
	{
		char arr[]= atr.toCharArray();
	
		System.out.println("The Converted String is: ");
		
		for(int j=0;j<arr.length;j++)
		{
			System.out.println(arr[j]);
		}
	}
	
}
class demo
{
	public static void main(String args[])
	{
		Scanner sobj= new Scanner(System.in);
		
		System.out.println("Enter Number of Elements");
		int iNo= sobj.nextInt();
		
		Integer[] Array= new Integer[iNo];
		
		for(int i=0;i<iNo;i++)
		{
			Array[i]= sobj.nextInt();
		}
		
		Conversion cobj= new Conversion();
		
		String Ret = new String();
		
		Ret = cobj.ArrayToString(Array);
		
		System.out.println("The Converted String is: "+Ret);
		

		System.out.println("Enter a String");
		
		sobj.nextLine();
		
		String atr= sobj.nextLine();
		
		cobj.StringToArray(atr);
		
	}
}