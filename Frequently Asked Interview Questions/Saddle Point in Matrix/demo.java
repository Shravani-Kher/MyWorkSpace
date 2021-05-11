import java.lang.*;
import java.util.*;

class Saddle
{
	void SaddlePoint(int arr[][], int Col, int Row)
	{
		if(Col!=Row)
		{
			return;
		}
		
		int i=0,j=0,Rno=0,Cno=0;
		
		int Ans = arr[i][j];
		
		for(j=0;j<Col;j++)
		{
			if(arr[i][j]<Ans)
			{
				Ans = arr[i][j];
				Cno = j;
			}
		}
		
		
		j=Cno;
		
		
		for(i=0;i<Row;i++)
		{
			if(arr[i][j]>Ans)
			{
				Ans = arr[i][j];
				Rno = i;
			}
		}
		
		
		System.out.println("The Saddle Point in Given Matrix is: "+Ans);
		System.out.println("The Position of Saddle point is: Row :"+Rno+1+"Column :"+Cno+1);
	}
}

class demo
{
	public static void main(String args[])
	{
		Scanner sobj = new  Scanner(System.in);
		
		System.out.println("Enter Number of Rows");
		int Row = sobj.nextInt();
		
		System.out.println("Enter Numbr of Columns");
		int Col = sobj.nextInt();
		
		int arr[][] = new int[Row][Col];
		
		System.out.println("Enter Array Elements");
		
		for(int i=0;i<Row;i++)
		{
			for(int j=0;j<Col;j++)
			{
				System.out.println("Enter element of:"+i+"Row &"+j+"Col");
				
				arr[i][j] = sobj.nextInt();
			}
		}
		
		Saddle obj = new Saddle();
		
		obj.SaddlePoint(arr,Col,Row);
		
	}
}