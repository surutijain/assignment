#include<stdio.h>
int main()
{
	int num=5, i=1;
	int fact=i;
	while(i<=num)
	{
		fact *=i;
		i++;
	}
	printf("%d",fact);
	return 0;
}
