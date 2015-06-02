#include<iostream>
using namespace std;
 
int GCD(int a,int b)
{
	if(b!=0)
		a=GCD(b,a%b);
	return a;
}
 
int main()
{
	int t,a[50],n,min,i;
	int div;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		div=a[0];
		for(i=1;i<n;i++){
			div=GCD(div,a[i]);
		}
		for(i=0;i<n;i++)
			cout<<a[i]/div<<" ";
		cout<<endl;
	}
	return 0;
}
