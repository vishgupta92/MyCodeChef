#include<iostream>
using namespace std;
int main()
{
	bool job[1001];
	int val[1001];
	int t,n,m,i,j,num;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(i=0;i<=n;i++){
			job[i]=true;	
		}
		for(i=0;i<m;i++){
			cin>>num;
			job[num]=false;
		}
		for(i=1,j=0;i<=n;i++){
			if(job[i])
				val[j++]=i;
		}
		for(i=0;i<j;i+=2)
			cout<<val[i]<<" ";
		cout<<endl;
		for(i=1;i<j;i+=2)
			cout<<val[i]<<" ";
		cout<<endl;
	}
	return 0;
}
