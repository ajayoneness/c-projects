#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a,b,c,i;
	printf("Enter 2 value :\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	for(i=1; i<10; i++)
	{
		printf("the sum of two numer is %d",i*c);
		printf("\n");
	}
	
	getch();
	return 0;
}
