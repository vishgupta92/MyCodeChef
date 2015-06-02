#include<iostream>
using namespace std;
int main(){
	int t,i,ar[10],min;
	cin>>t;
	while(t--){
		cin>>ar[0]>>ar[1];
		min=1;
		for(i=2;i<10;i++){
			cin>>ar[i];
			if(ar[min]>ar[i])
				min=i;
		}
		if(ar[0]<ar[min]){
			cout<<"1";
			for(i=0;i<=ar[0];i++)
				cout<<"0";
		}
		else{
			for(i=0;i<=ar[min];i++)
				cout<<min;
		}
		cout<<endl;
	}
	return 0;
} 
