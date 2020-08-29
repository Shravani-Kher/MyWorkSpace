
//////////////////////////////////////////////////// 
//
//  Function Name:  DisplayConvert.
//  Parameters:     Character.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           05 August 2020
//
//////////////////////////////////////////////////// 

/*Accept one character from user and convert case of that character. */ 
 
//Input  : a   
//Output : A  
//Input  : D   
//Output : d 

void DisplayConvert(char cNo)
{
		char ch='\0';
		
		
		
		ch=cNo+32;
	
	printf("%c",ch);
	
	
	
}


int main()
{
	char cValue='\0';
	
	printf("Enter the Number :");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);	
	
	return 0;
	
}