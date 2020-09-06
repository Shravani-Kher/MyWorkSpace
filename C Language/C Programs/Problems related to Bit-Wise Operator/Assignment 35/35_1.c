
//////////////////////////////////////////////////// 
//
//  Function Name:  CountON.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           29 September 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.*/
 
//Input  :  11 
//Output :  3   

#include<stdio.h>

int CountON(int iNo)
{
	int i= 1;
	int iCnt= 0;
	int iMask= 0;
	int iResult= 0;
	
	iMask= 0x00000001;
	
	while(i<=32)
	{
		iResult= iNo & iMask;
		
		if(iResult==iMask)
		{
			iCnt++;
		}
		
		iMask= iMask<<1;
		i++;
	}
	
	return iCnt;
	
	
}

int main()
{
	int iNo= 0;
	int iRet= 0;
	
	printf("Enter the Number");
	scanf("%d",&iNo);
	
	iRet= CountON(iNo);
	
	printf("The Number is : %d",iRet);
	
	return 0;
}
