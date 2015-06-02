#include<iostream>
using namespace std;
int main()
{
	int t,num;
	cin>>t;
	while(t--){
		cin>>num;
		if(num%2==0)
			cout<<"ALICE\n";
		else
			cout<<"BOB\n";
	}
	return 0;
}
