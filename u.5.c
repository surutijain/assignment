#include<stdio.h>
int main()
{
	
	int h,e,m,c,s;
	printf("enter the marks");
	scanf("%d %d %d %d %d",&h,&e,&m,&c,&s);
	if(h>=40 && e>=40 && m>=40 && c>=40 && s>=40)
	{
		printf("yor are pass");
	}
	else{
		printf("you are fail");
	}
	return 0;
}
