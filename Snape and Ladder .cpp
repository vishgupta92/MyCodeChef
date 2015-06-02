#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int t,temp;
	float b,ls,min,max;
	cin>>t;
	while(t--){
		cin>>b>>ls;
		if(b>ls){
			temp=b;
			b=ls;
			ls=temp;
		}
		min=sqrt(ls*ls-b*b);
		max=sqrt(ls*ls+b*b);
		cout<<min<<" "<<max<<endl;
	}
	return 0;
} 
