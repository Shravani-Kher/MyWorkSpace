import java.lang.*;
import java.util.*;

class demo
{
	public static void main(String args[])
	{
		Scanner sobj= new Scanner(System.in);
		
		ArrayList<String> obj= new ArrayList<String>();
		
		System.out.println("Enter the Number of Elements");
		int iNo= sobj.nextInt();
		
		System.out.println("Enter the String");
		
		for(int i=0;i<=iNo;i++)
		{
			String iValue= sobj.nextLine();
			
			obj.add(iValue);
		}
		
//*********************************************************
//*********************************************************
		String[] Arr = new String[obj.size()];
		
		Arr= obj.toArray(Arr);
//*********************************************************
//*********************************************************
		
		for(int j=0;j<Arr.length;j++)
		{
			System.out.println(Arr[j]);
		}
		
	}
}