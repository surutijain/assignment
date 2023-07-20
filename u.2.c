#include<stdio.h>
int main()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("valid for vote");
		
	}
	else
	{
		printf("not valid for vote");
	}
	return 0;
}
