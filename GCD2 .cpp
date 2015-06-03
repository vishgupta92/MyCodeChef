#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a,int b){
	if(b==0)	
		return a;
	return gcd(b,a%b);
}
int main(){
	int sum=0,t,a,i;
	char b[251];
	cin>>t;
	while(t--){
		scanf("%d %s",&a,b);
		//cin>>a>>b;
		if(a==0){
			cout<<b<<endl;
			continue;
		}
		sum=0;
		for(i=0;b[i];i++){
			sum=sum*10+b[i]-48;
			sum%=a;
		}
		cout<<gcd(a,sum)<<endl;
	}
	return 0;
}
