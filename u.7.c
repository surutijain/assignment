#include<stdio.h>
int main()
{
	char word;
	printf("enter the word");
	scanf("%c",&word);
	if((word>='a' && word<='z')||(word>='A' && word<='Z'))
	{
		printf("word is alphabet");
	}
	else{
		printf("wors is not alphabet");
	}
	return 0;
}
