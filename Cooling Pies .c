#include<stdio.h>
void combineboth(int a[],int c[],int start,int end)
{
	int i;
	for(i=start;i<=end;i++)
		a[i]=c[i];
}
int merge(int a[],int al,int au,int b[],int bl,int bu)
{
	int c[bu];
	int i=al,j=bl,cl=al;
	while(i<=au && j<=bu){
		if(a[i]<b[j])
			c[cl++]=a[i++];
		else
			c[cl++]=b[j++];
	}
	while(i<=au)
		c[cl++]=a[i++];
	while(j<=bu)
		c[cl++]=b[j++];
	combineboth(a,c,al,bu);
}
void mergesort(int a[],int start,int end)
{
	int mid;
	if(start<end)
	{
		mid=(start+end)/2;
		mergesort(a,start,mid);
		mergesort(a,mid+1,end);
		merge(a,start,mid,a,mid+1,end);
	}
}
int main()
{
	int t,n,i,j,count;
	int c[100],p[100];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&p[i]);
		for(i=0;i<n;i++)
			scanf("%d",&c[i]);
		mergesort(p,0,n-1);
		mergesort(c,0,n-1);
		i=j=count=0;
		while(i<n && j<n){
			if(c[i]>=p[j]){
				count++;
				i++;
				j++;
				continue;
			}
			else
				i++;
		}
		printf("%d\n",count);
	}
	return 0;
}
