#include<iostream>
using namespace std;
int main(){
  int t;
  long int n;
  cin>>t;
  while(t--){
    cin>>n;
    n--;
    if(n%4==0)
    	cout<<"ALICE\n";
    else
    	cout<<"BOB\n";
  }
  return 0;
}
