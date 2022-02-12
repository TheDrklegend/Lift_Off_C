#include<stdio.h>
int main()
{
	//ASSIGNMENT QUESTIONS #5
	double r,d,c,a; int ch;
	printf("ENTER RADIUS OF CIRCLE: ");
	scanf("%lf",&r);
	d=r*2;
	c=2*(3.14)*r;
	a=(3.14)*(r*r);
	printf("ENTER 1 FOR DIAMETER, 2 FOR CIRCUMFERENCE, 3 FOR AREA: ");
	scanf("%d",&ch);
	if(ch==1)
		printf("THE DIAMETER OF THE CIRCLE IS: %lf",d);
	else if(ch==2)
		printf("THE CIRCUMFERENCE OF THE CIRCLE IS: %lf",c);
	else if(ch==3)
		printf("THE AREA OF THE CIRCLE IS: %lf",a);
	else
		printf("INVALID INPUT -_-");
	return 0;
}