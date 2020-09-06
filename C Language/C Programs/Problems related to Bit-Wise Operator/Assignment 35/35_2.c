
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayPos.
//  Parameters:     Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           29 September 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept two numbers from user and display position of common ON bits from that two numbers.*/
 
//Input  :  10 15  (1010  1111) 
//Output :  2 4  

#include<stdio.h>

void DisplayPos(int iNo1, int iNo2)
{
	int i= 1;
	int iMask= 0;
	int iResult1= 0;
	int iResult2= 0;
	
	iMask= 0x00000001;
	
	while(i<=32)
	{
		iResult1= iNo1 & iMask;
		
		iResult2= iNo2 & iMask;
		
		if((iResult1==iMask)&&(iResult2==iMask))
		{
			printf("%d\t",i);
		}
		
		iMask= iMask<<1;
		i++;
	}
	
}

int main()
{
	int iNo1= 0;
	int iNo2= 0;
	
	printf("Enter the Number");
	scanf("%d",&iNo1);
	
	printf("Enter the Number");
	scanf("%d",&iNo2);
	
	DisplayPos(iNo1,iNo2);
	
	return 0;
}
