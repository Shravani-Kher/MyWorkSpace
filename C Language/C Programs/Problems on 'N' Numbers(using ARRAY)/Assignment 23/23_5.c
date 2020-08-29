
//////////////////////////////////////////////////// 
//
//  Function Name:  Product.
//  Parameters:     Integer, Integer.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
////////////////////////////////////////////////////  

/*Accept N numbers from user and return product of all odd elements.*/

//Input :  N :   6     
//Elements : 15 66 3 70 10 88  
//Output : 45 

//Input :  N :   6     
//Elements : 44 66 72 70 10 88  
//Output : 0 

#include<stdio.h>
#include<stdlib.h>

int Product(int arr[],int iNo)
{
	int iCnt= 0;
	int iAns= 1;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]%2!=0)
		{
			iAns= iAns*arr[iCnt];
		}
	}
	return iAns;
}
int main()
{
	int iValue1= 0;
	int iCnt= 0;
	int *ptr= NULL;
	int iRet= 0;
	
	
	printf("Enter 'N' Number");
	scanf("%d",&iValue1);
	
	
	ptr=(int *)malloc(sizeof(int)*iValue1);
	if(ptr==NULL)
	{
		printf("ERROR: Unable to Allocate Memory");
		return -1;
	}
	printf("Enter the Numbers\n");
	for(iCnt=0;iCnt<iValue1;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Product(ptr,iValue1);
	
	printf("The Product is: %d",iRet);
	
	free(ptr);
	return 0;
}