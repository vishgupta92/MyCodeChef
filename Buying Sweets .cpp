#include<iostream>
using namespace std;
int main(){
  int f,extra,sum,t,n,x,num,i,ar[100];
  cin>>t;
  while(t--){
    cin>>n>>x;
    sum=0;
    for(i=0;i<n;i++){
      cin>>ar[i];
      sum+=ar[i];
    }
    extra=sum%x;
    if(extra==0)
    	cout<<sum/x<<endl;
    else{
    	f=0;
		for(i=0;i<n;i++){
      		if(extra>=ar[i]){
      			f=1;
      			break;
      		}
    	}
    	if(f)
    		cout<<"-1\n";
    	else
    		cout<<sum/x<<endl;
    }
  }
  return 0;
}
