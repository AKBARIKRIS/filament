#include<stdio.h>
#include<string.h>
main()
{
	char email[25];
	char password[10];
	printf("enter your email :");
	scanf("%s",&email);
	
	printf("enter password :");
	scanf("%s",&password);
	
	if(strcmp(email,"akbarikris1808@gmail.com")==0)
	{
		if(strcmp(password,"AKBARI@1808@")==0)
		{
			printf("welcom: successfulli login");
		}
		else
		{
			printf("sorry please cheak your password ");
		}
	}
	else
	{
		printf("User doesn't exist");
	}
}
