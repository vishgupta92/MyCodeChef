#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
int main()
{
	int t,c,i;
	char str[401],ch;
	cin>>t;	
	while(t--)
	{
		cin>>str;
		stack<char> s;
		for(i=0;i<strlen(str);i++){
			if(str[i]==')'){
				ch=s.top();
				s.pop();
				cout<<ch;
			}
			else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' || str[i]=='^')
				s.push(str[i]);
			else if(str[i]>='a' && str[i]<='z')
				cout<<str[i];
		}
		while(!s.empty())
			s.pop();
		cout<<endl;
	}
	return 0;
} 
