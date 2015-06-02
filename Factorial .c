#include<stdio.h>
#include<malloc.h>
int main()
{
	long *p,div=5;
	int c=0,n,i;
	scanf("%d",&n);
	p=(long*)malloc(sizeof(long)*n);
	for(i=0;i<n;i++)
		scanf("%ld",p+i);
	for(i=0;i<n;i++){
	  c=0;div=5;
	  while(div<=*(p+i))
	  {
	  	c=c+*(p+i)/div;
		div*=5;
	  }
	printf("%d\n",c);
	}
	return 0;
} 
