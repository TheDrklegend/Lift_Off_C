#include<stdio.h>
int main()
{
	//ASSIGNMENT QUESTIONS #4
	int a,b,ch,r;
	printf("ENTER TWO NUMBERS: ");
	scanf("%d %d",&a,&b);
	printf("ENTER 1 FOR ADDITION, 2 FOR SUBTRACTION, 3 FOR MULTIPLICATION, 4 FOR DIVISION: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			r=a+b;
			printf("THE ADDITION OF %d AND %d IS: %d",a,b,r);
			break;
		}
		case 2:
		{
			if(a<=b)
				r=b-a;
			else
				r=a-b;
			printf("THE SUBTRACTION OF %d AND %d IS: %d",a,b,r);
			break;
		}
		case 3:
		{
			r=a*b;
			printf("THE MULTIPLICATION OF %d AND %d IS: %d",a,b,r);
			break;
		}
		case 4:
		{
			r=a/b;
			printf("THE DIVISION OF %d AND %d IS: %d",a,b,r);
			break;
		}
		default:
			printf("INVALID INPUT -_-");
			break;
	}
	return 0;
}
