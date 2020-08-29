
//////////////////////////////////////////////////// 
//
//  Function Name:  ChkEven.
//  Parameters:     Integer, Integer.
//  Return Value:   BOOLEAN.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
////////////////////////////////////////////////////

/* Accept number from user and check whether number is even or odd. */
 
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEven(int iNo)
{
	if(iNo%2==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main() 
{  
    int iValue = 0; 
    BOOL bRet = FALSE; 
    
    printf("Enter number\n");  
    scanf("%d",&iValue); 
   
    bRet = ChkEven(iValue); 
	
	if(bRet==TRUE)
	{
		printf("The Number is Even");
	}
	else
	{
		printf("The Number is Odd");
	}
  
   return 0; 
}
