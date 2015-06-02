#include<iostream>
using namespace std;
int main()
{
	int t,a[10000],n,s,min,i;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		s=1;
		min=a[0];
		for(i=1;i<n;i++)
			if(a[i]<min){
				s++;
				min=a[i];
			}
		cout<<s<<endl;
	}
	return 0;
} 
