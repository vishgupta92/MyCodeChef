#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	a=a-b;
	b=a%10;
	if(b==9)
		a--;
	else
		a++;
	printf("%d",a);
	return 0;
} 
