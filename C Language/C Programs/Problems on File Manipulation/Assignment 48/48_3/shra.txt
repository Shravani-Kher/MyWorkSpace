
//////////////////////////////////////////////////// 
//
//  Function Name:  ReadFile.
//  Parameters      String.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           27 September 2020
//
//////////////////////////////////////////////////// 

/*Write application which accept file name from user and read all data from 
  that file and display contents on screen.*/
  
//Input :  Demo.txt 

//Output :  Display all data of file. 


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

void ReadFile(char name[])
{
	int fd= 0;
	int ret= 0;
	char arr[100]={'\0'};
	
	fd= open(name,O_RDONLY);
	
	if(fd==-1)
	{
		printf("File dose not exist or Unable to Open");
		return;
	}
	
	printf("Data from File is\n");
	
	while((ret= read(fd,arr,100))!=0)
	{
		write(1,arr,ret);
	}
	
	close(fd);
}

int main()
{
	char name[20]={'\0'};
	
	printf("Enter Name of file");
	scanf("%s",&name);
	
	ReadFile(name);

	return 0;
}











