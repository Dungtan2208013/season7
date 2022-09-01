#include<stdio.h>

int main()
{
	int num , res ;
	printf("Enter a number:");
	scanf("%d", &num);
	res = num %2;
	if (res == 0)
	printf("the number is Even");
	else
	printf("the number is odd");
}
