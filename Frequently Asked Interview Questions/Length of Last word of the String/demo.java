							//LENGTH OF LAST WORD

import java.lang.*;
import java.util.*;

class Length
{
	int LengthOfLastWord(String str)
	{
		int iCnt = 0,No=0;
		
		for(int i=str.length()-1;i>=0;i--)
		{
			if(str.charAt(i)!=' ')
			{
				No = i;
				break;
			}
		}
		
		for(int j=No;j>=0;j--)
		{
			if(str.charAt(j)==' ')
			{
				break;
			}
			else
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
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter one String");
		String str = sobj.nextLine();
		
		Length obj = new Length();
		
		int Ans = obj.LengthOfLastWord(str);
		
		System.out.println("Length of Last Word is: "+Ans);
		
	}
}