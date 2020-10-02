
//////////////////////////////////////////////////// 
//
//  Function Name:  Smallest, SmallestR.
//  Parameters:     Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           25 September 2020
//
////////////////////////////////////////////////////

/*Write a recursive program which accept string from user and count number of small characters.*/
 
//Input : HElloWOrlD 

//Output : 5

#include<stdio.h>

/*------NORMAL APPROACH------*/

int Smallest(char Str[])
{
	int iCnt= 0;
	int i= 0;
	
	while(Str[i]!='\0')
	{
		if((Str[i]>='a')&&(Str[i]<='z'))
		{
			iCnt++;
		}
		i++;
	}
	
	return iCnt;
}


/*------RECCURSIVE APPROACH------*/

int SmallestR(char Str[])
{
	static int iCnt= 0;
	static int i= 0;
	
	if(Str[i]!='\0')
	{
		if((Str[i]>='a')&&(Str[i]<='z'))
		{
			iCnt++;
		}
		i++;
		SmallestR(Str);
	}
	
	return iCnt;
}

int main()
{
	char Str[20]={'\0'};
	int iRet= 0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",&Str);
	
	iRet=Smallest(Str);
	
	printf("/*------NORMAL APPROACH------*/\n");
	printf("Number of Small Characters are: %d\n",iRet);
	
	iRet=SmallestR(Str);
	
	printf("/*------RECCURSIVE APPROACH------*/\n");
	printf("Number of Small Characters are: %d\n",iRet);
	
	return 0;
}














