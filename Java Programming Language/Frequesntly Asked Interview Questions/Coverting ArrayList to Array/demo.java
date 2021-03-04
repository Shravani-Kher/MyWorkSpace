import java.lang.*;
import java.util.*;

class demo
{
	public static void main(String args[])
	{
		Scanner sobj= new Scanner(System.in);
		
		ArrayList<Integer> obj= new ArrayList<Integer>();
		
		System.out.println("Enter the Number of Elements");
		int iNo= sobj.nextInt();
		
		System.out.println("Enter the Elements");
		
		for(int i=0;i<iNo;i++)
		{
			int iValue= sobj.nextInt();
			
			obj.add(iValue);
		}
		
//*********************************************************
//*********************************************************
		Integer[] Arr = new Integer[obj.size()];
		
		Arr= obj.toArray(Arr);
//*********************************************************
//*********************************************************
		
		for(int j=0;j<Arr.length;j++)
		{
			System.out.println(Arr[j]);
		}
		
	}
}