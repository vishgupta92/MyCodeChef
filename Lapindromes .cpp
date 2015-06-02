#include<iostream>
#include<cstring>

using namespace std;
int main(){
  int i,len,ar[26],t,yes,k;
  char str[1001];
  cin>>t;
  while(t--){
  	cin>>str;
  	len=strlen(str);
  	yes=1;
  	for(i=0;i<26;i++)
  		ar[i]=0;
  	k=len&1;
  	for(i=0;i<len/2;i++){
  		ar[str[i]-97]++;
		ar[str[i+len/2+k]-97]--;	
  	}
  	for(i=0;i<26;i++){
  		if(ar[i]){
  			yes=0;
  			break;
  		}	
  	}
  	if(yes)
  		cout<<"YES\n";
  	else
  		cout<<"NO\n";
  }
  
  return 0;
}
