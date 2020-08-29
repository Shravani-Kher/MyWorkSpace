
//////////////////////////////////////////////////// 
//
//  Function Name:  CalculateBill.
//  Parameters:     Float, Float.
//  Return Value:   Float.
//  Author:         Shravani Vinod Kher
//  Date:           18 August 2020
//
////////////////////////////////////////////////////

 /*Design application for hotel. According to the management team of hotel they are giving discount on 
 total bill amount of customer.  If bill bill amount is less than 500 then there is no discount , 
 if bill amount is less than 1500 and more than 500 they give 10% discount.  And if the bill amount 
 is more than 1500 then they give 15% discount.  Our application should accept total bill amount and 
 depends on the discount policy we have to return the amount after applying discount.*/
 
//Input : 1200  
//Output : 1080 

//Input : 290   
//Output : 290 

//Input : 3700  
//Output : 3145

#include<stdio.h>

float CalculateBill(float fAmt)
{
    float fPercent= 0;
	
	if(fAmt<500)
	{
	    return fAmt;	
	}
	else if((fAmt>500)&&(fAmt<1500))
	{
		fPercent= (fAmt/100)*10;
		fAmt=fAmt-fPercent;
		return fAmt;
		
	}
	else
	{
		fPercent= (fAmt/100)*15;
		fAmt=fAmt-fPercent;
		return fAmt;
	}
}

int main()
{
	float fValue= 0;
	float fRet= 0;
	
	printf("Enter the Total Bill Amount");
	scanf("%f",&fValue);
	
	fRet=CalculateBill(fValue);
	
	printf("The Amount to be Paid is:%f",fRet);
	
	return 0;
}