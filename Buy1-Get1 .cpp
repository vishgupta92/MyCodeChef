#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int str[256];char s[201];
	int t,i,sum;
	cin>>t;
	while(t--){
		memset(str, 0, sizeof(str));
		cin>>s;
		for(i=0;s[i]!='\0';i++)
			str[s[i]]++;
		sum=0;
		for(i=65;i<123;i++)
			sum+=str[i]/2+str[i]%2;
		cout<<sum<<endl;
	}	
	return 0;
} 
