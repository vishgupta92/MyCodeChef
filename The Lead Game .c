#include<iostream>
using namespace std;
int main()
{
	int n,s,t;
	int max=0,diff,f=0,ss=0,ts=0;
	cin>>n;
	while(n--)
	{
		cin>>s>>t;
		ss+=s;ts+=t;
		if(ss>ts){
			if(max<(ss-ts)){
				max=ss-ts;
				f=1;
			}
		}
		else if(ts>ss){
			if(max<(ts-ss)){
				max=ts-ss;
				f=2;
			}
		}
	}
	cout<<f<<" "<<max;	
	return 0;
} 
