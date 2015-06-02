#include<iostream>
#include<stdlib.h>
using namespace std;
void combineboth(int a[],int s,int e,int c[]){
	int i;
	for(i=s;i<=e;i++)
		a[i]=c[i];
}
void merge(int a[],int al,int au,int b[],int bl,int bu){
	int c[bu],i=al,j=bl,k=al;
	while(i<=au && j<=bu)
		if(a[i]<b[j])
			c[k++]=a[i++];
		else
			c[k++]=b[j++];
	while(i<=au)
		c[k++]=a[i++];
	while(j<=bu)
		c[k++]=b[j++];
	combineboth(a,al,bu,c);	
}
void mergesort(int a[],int s,int e){
	int mid;
	if(s<e){
		mid=(s+e)/2;
		mergesort(a,s,mid);
		mergesort(a,mid+1,e);
		merge(a,s,mid,a,mid+1,e);
	}
}
int main()
{
	int t,n,i,diff;
	int a[5000];
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		mergesort(a,0,n-1);
		diff=abs(a[0]-a[1]);
		for(i=1;i<n-1;i++)
			if(abs(a[i]-a[i+1])<diff)
				diff=abs(a[i]-a[i+1]);
		cout<<diff<<endl;
	}
	
	return 0;
}
