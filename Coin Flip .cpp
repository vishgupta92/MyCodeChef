#include<iostream>
using namespace std;
int main(){
	int t,g,i,n,q;
	cin>>t;
	while(t--){
		cin>>g;
		while(g--){
			cin>>i>>n>>q;
			if(n&1){
					if(i==q)
						cout<<n/2<<endl;
					else
						cout<<n/2+1<<endl;
			}
			else{
				cout<<n/2<<endl;
			}		
		}
	}
	return 0;
}
