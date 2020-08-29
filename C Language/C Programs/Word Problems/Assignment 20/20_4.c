
//////////////////////////////////////////////////// 
//
//  Function Name:  TouristBill.
//  Parameters:     Float.
//  Return Value:   Float.
//  Author:         Shravani Vinod Kher
//  Date:           18 August 2020
//
////////////////////////////////////////////////////

/*We have to design application for tourist company.  Tourist company provides cars on rent.  
Depends on the running of car they apply rent.If running is less than 100 kilometres then they 
charge 25 rupees per kilometre .  And if running is more than 100 kilometres then they apply 15 
rupees per kilometre after 100 kilometres.  We have to accept number of kilometres from user and 
return the estimated rent.*/ 

//Input : 73   
//Output : 1825 

//Input : 132   
//Output : 2980 

//Input : 189   
//Output : 3835 
 

#include<stdio.h>

float TouristBill(float fNo)
{
    float fAns= 0.0;
	float iAns= 0.0;
	
	if(fNo<100)
	{
		fAns= fNo*25;
		
		return fAns;
	}
	else
	{
		fNo= fNo-100;
		fAns= fNo*15;
		iAns= 100*25;
		
		fAns=fAns+iAns;
		
		return fAns;
	}
	
}

int main()
{
	float fValue= 0;
	float fRet= 0;
	
	printf("Enter the Kilometers");
	scanf("%f",&fValue);
	
	fRet=TouristBill(fValue);
	
	printf("The Total Bill is:%f",fRet);
	
	return 0;
}