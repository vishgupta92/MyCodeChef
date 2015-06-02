#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,n,k,i,j;
	int chamber[100];
	cin>>a>>n>>k;
	n++;
	a=a%(int)(pow(n,k));
	i=0;
	while(a>0){
		chamber[i++]=a%n;
		a/=n;
	}
	for(j=0;j<i;j++){
		cout<<chamber[j]<<" ";
	}
	for(;j<k;j++){
		cout<<"0 ";
	}
	return 0;
} 
