#include<stdio.h>

int mian()
{
	char c;
	printf("please enter a character :");
	scanf("%c", &c);
	if (c >= 'A' && c <= 'Z');
	  printf("lowercase character = %c",c +'a' -'A');
	else
	  printf("Character Entered is = %c",c);
}
