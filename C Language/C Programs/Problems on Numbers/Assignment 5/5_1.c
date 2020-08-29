
//////////////////////////////////////////////////// 
//
//  Function Name:  -------
//  Parameters:     -------
//  Return Value:   -------
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
//////////////////////////////////////////////////// 

/*Write a program which accept name from user and print that name.*/  
  
//Input : Piyush Khairnar    
//Output : Piyush Khairnar 

#include<stdio.h>

int main()
{
	char cName[30];
	
	printf("Enter Name\n");
	scanf("%[^'\n']s",&cName);
	
	printf("Your Name is %s",cName);
	
	return 0;
}