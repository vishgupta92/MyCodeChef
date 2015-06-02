#include<iostream>
using namespace std;
int main()
{
	int i,a[100001],b[100001],n;
	bool ambi;
	while(true){
		ambi=true;
		cin>>n;
		if(!n)
			break;
		for(i=1;i<=n;i++)
			cin>>a[i];
		for(i=1;i<=n;i++)
			b[a[i]]=i;
		for(i=1;i<=n;i++){
			if(a[i]!=b[i]){
				ambi=false;
				break;
			}
		}
		if(ambi)
			cout<<"ambiguous\n";
		else
			cout<<"not ambiguous\n";
	}
	return 0;
} 
