
//////////////////////////////////////////////////// 
//
//  Function Name:  InsertAtLast.
//  Parameters      String, String.
//  Return Value:   Void.
//  Author:         Shravani Vinod Kher
//  Date:           27 September 2020
//
//////////////////////////////////////////////////// 

/*Write application which accept file name from user and one string from user. 
  Write that string at the end of file.*/
  
//Input :  Demo.txt   Hello World 

//Output :  Write Hello World at the end of Demo.txt file 


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>

void InsertAtLast(char name[], char data[])
{
	int fd= 0;
	int iSize= 0;
	
	while(data[iSize]!='\0')
	{
		iSize++;
	}
	
	fd= open(name,O_RDWR);
	
	if(fd==-1)
	{
		printf("File dose not exist or Unable to Open");
		return;
	}

	lseek(fd,0,SEEK_END);
	
	write(fd,data,iSize);
	
	close(fd);
}

int main()
{
	char name[20]={'\0'};
	char data[100]={'\0'};
	
	printf("Enter Name of file\n");
	scanf("%s",&name);
	
	printf("Enter String to Append\n");
	scanf(" %[^'\n']s",&data);
	
	InsertAtLast(name,data);
	
	return 0;
}











