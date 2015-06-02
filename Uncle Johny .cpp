#include<iostream>
using namespace std;
int main(){
  int t,n,ar[100],like,i,small;
  cin>>t;
  while(t--){
  	cin>>n;
  	for(i=0;i<n;i++)
  		cin>>ar[i];
  	cin>>like;
  	like--;
  	small=0;
  	for(i=0;i<n;i++)
  		if(ar[i]<ar[like])
  			small++;
  	cout<<(small+1)<<endl;
  }
  return 0;
}
