#include<stdio.h>

void StrCat(char arr[], char brr[])
{
	int i= 0;
	int j= 0;
	
	while(arr[i]!='\0')
	{
		i++;
	}
	
	while(brr[j]!='\0')
	{
		arr[i]= brr[j];
		i++;
		j++;
	}
	
	arr[i]= '\0';
}

int main()
{
	char arr[50]={'\0'};
	char brr[50]={'\0'};
	
	printf("Please enter First String\n");
	scanf("%[^'\n']s",&arr);
	
	printf("Please enter Second String\n");
	scanf(" %[^'\n']s",&brr);
	
	StrCat(arr,brr);
	
	printf("%s",arr);
	
	return 0;
}