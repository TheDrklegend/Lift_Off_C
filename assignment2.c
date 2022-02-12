#include<stdio.h>
int main()
{
	//ASSIGNMENT QUESTIONS #3
	int n;
	printf("ENTER A NUMBER: ");
	scanf("%d",&n);
	switch(n%2==0)
	{
		case 1:
			printf("%d IS EVEN",n);
			break;
		case 0:
			printf("%d IS ODD",n);
			break;
		default:
			printf("INVALID INPUT -_-");
			break;
	}
	return 0;
}

