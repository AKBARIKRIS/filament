#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	printf("enter string =");
	gets(a);
	
	strcpy(b,a);
	
	printf("revers string = %s \n",strrev(a));
	
	if(strcmp(a,b) ==0)
	{
		printf("number is palindrom");
	}
	else
	{
		printf("number is not palindrom");
	}
}
