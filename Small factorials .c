#include<stdio.h>
int main()
{
	int a[170]={0},temp,m,i,j,n,T,k;
	scanf("%d",&T);
	for(k=0;k<T;k++){
	scanf("%d",&n);
	m=1;temp=0;a[0]=1;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<m;j++)
		{
			temp=a[j]*i+temp;
			a[j]=temp%10;
			temp/=10;
		}
		while(temp!=0)
		{
			a[j++]=temp%10;
			temp/=10;
			m++;
		}
	}
	if(!n) printf("1");
	else if(n<0) m-=2;
	else for(j=m-1;j>=0;j--)
			printf("%d",a[j]);
	printf("\n");
	}
	return 0;
}
