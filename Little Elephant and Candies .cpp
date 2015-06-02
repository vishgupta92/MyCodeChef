#include<iostream>
using namespace std;
int main()
{
	int t,e,c,s,a;
	cin>>t;
	while(t--){
		cin>>e>>c;
		s=0;
		while(e--){
			cin>>a;
			s+=a;
		}
		if(s>c)
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}	
	return 0;
}
