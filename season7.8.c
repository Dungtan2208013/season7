#include<stdio.h>

int main()
{
	int basic;
	printf("\n please enter your basic:");
	sacnf("%d",&basic);
	switch (basic)
    {
 	case 200 : printf("\n Bonus is dollar %d\n", 50);
 	break;
	case 300 : printf("\n Bonus is dollar %d\n", 125);
 	break;
 	case 400 : printf("\n Bonus is dollar %d\n", 140);
 	break;
 	case 500 : printf("\n Bonus is dollar %d\n", 175);
 	break;
 	default : printf("\n Invalid entry");
 	break;
 	}
}
