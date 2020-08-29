
//////////////////////////////////////////////////// 
//
//  Function Name:  CalculateTax.
//  Parameters:     Float, Float.
//  Return Value:   Float.
//  Author:         Shravani Vinod Kher
//  Date:           18 August 2020
//
////////////////////////////////////////////////////

/*Design application for income tax department to calculate tax amount. According to the income
tax department there is no income tax for the income less than 5 lakhs.  If income is in between
5 to 10 lakhs then there will be 10% tax.  If income is in between 10 to 20 lakhs then there will 
be 20% tax.  And for more than 20 lakhs there will be 30% tax.  We have to accept gross income from 
user and return the tax amount.*/ 
                                               
//Input : 600000  
//Output : 10000   (0 + 10000) 

//Input : 450000  
//Output : 0 

//Input : 1200000  
//Output : 90000   (0 + 50000 + 40000) 

#include<stdio.h>

float CalculateTax(float fIncome)
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