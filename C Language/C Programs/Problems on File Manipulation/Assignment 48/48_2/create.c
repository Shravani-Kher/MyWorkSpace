
//////////////////////////////////////////////////// 
//
//  Function Name:  Main.
//  Input:          String.
//  Return Value:   -------.
//  Author:         Shravani Vinod Kher
//  Date:           27 September 2020
//
//////////////////////////////////////////////////// 

/*Write application which accept file name from user and create that file.*/
 
//Input :  Demo.txt 

//Output :  File created successfully 


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
	
	fd= creat(name,0777);
	
	if(fd==-1)
	{
		printf("Unable to Create File");
	}
	else
	{
		printf("File Successfully Created with fd: %d",fd);
	}
	
	return 0;
}











