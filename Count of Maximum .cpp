#include<iostream>
using namespace std;
int main()
{
	int ar[10001];
	int t,n,i,max,pos,num;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<10001;i++)
			ar[i]=0;
		for(i=0;i<n;i++){
			cin>>num;
			ar[num]++;
		}
		max=ar[0];
		pos=0;
		for(i=1;i<10001;i++){
			if(max<ar[i]){
				pos=i;
				max=ar[i];
			}
		}
		cout<<pos<<" "<<max<<endl;
	}
	return 0;
}
