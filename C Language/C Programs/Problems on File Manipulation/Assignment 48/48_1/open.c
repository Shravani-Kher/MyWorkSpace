
//////////////////////////////////////////////////// 
//
//  Function Name:  Main.
//  Input:          String.
//  Return Value:   -------.
//  Author:         Shravani Vinod Kher
//  Date:           27 September 2020
//
//////////////////////////////////////////////////// 

/*Write application which accept file name from user and open that file in read mode.*/
 
//Input :  Demo.txt 

//Output :  File opened successfully. 


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	char name[20]={'\0'};
	int fd= 0;
	
	printf("Enter Name of file");
	scanf("%s",&name);
	
	fd= open(name,O_RDONLY);
	
	if(fd==-1)
	{
		printf("File dose not exist or Unable to Open");
	}
	else
	{
		printf("File Successfully Opened with fd: %d",fd);
	}
	
	return 0;
}











