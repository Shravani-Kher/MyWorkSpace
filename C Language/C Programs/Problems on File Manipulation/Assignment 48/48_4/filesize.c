
//////////////////////////////////////////////////// 
//
//  Function Name:  FileSize.
//  Parameters      String.
//  Return Value:   Integer.
//  Author:         Shravani Vinod Kher
//  Date:           27 September 2020
//
//////////////////////////////////////////////////// 

/*Write application which accept file name from user and display size of file.*/
 
//Input :  Demo.txt 

//Output :  File size is 56 bytes 


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int FileSize(char name[])
{
	int fd= 0;
	int ret= 0;
	int iSize= 0;
	char arr[100]={'\0'};
	
	fd= open(name,O_RDONLY);
	
	if(fd==-1)
	{
		printf("File dose not exist or Unable to Open");
		return -1;
	}
	
	
	while((ret= read(fd,arr,100))!=0)
	{
		iSize= iSize+ret;
	}
	
	return iSize;
	
	close(fd);
}

int main()
{
	char name[20]={'\0'};
	int iRet= 0;
	
	printf("Enter Name of file");
	scanf("%s",&name);
	
	iRet= FileSize(name);
	
	printf("The Size of File is : %d Bytes", iRet);

	return 0;
}











