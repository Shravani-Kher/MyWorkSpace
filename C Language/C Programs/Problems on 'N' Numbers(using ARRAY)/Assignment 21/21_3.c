
//////////////////////////////////////////////////// 
//
//  Function Name:  Display.
//  Parameters:     Integer, Integer.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           21 August 2020
//
//////////////////////////////////////////////////// 

/*Accept N numbers from user and display all such elements which are even and divisible by 5.*/

//Input :  N :   6 
//Elements : 85 66 3 80 93 88  
//Output : 80

#include<stdio.h>
#include<stdlib.h>

void Display(int arr[], int iNo)
{
	int iCnt= 0;
	printf("The Number Divisible By 5 are: \n");
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]%2==0)
		{
	    	if(arr[iCnt]%5==0)
		    {
			    printf("%d\n",arr[iCnt]);
		    }
		}
	}
	
}
int main()
{
	int iValue= 0;
	int iCnt= 0;
	int *ptr= NULL;
	
	printf("Enter the 'N' Number");
	scanf("%d",&iValue);
	
	ptr=(int*)malloc(sizeof(int)*iValue);
	if(ptr == NULL)
    {
        printf("Error : Unable to allocate memory\n");
        return -1;
    }
	
	printf("Enter the Numbers\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr,iValue);
	
	return 0;
}