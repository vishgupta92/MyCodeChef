#include<iostream>
using namespace std;
bool isSubSet(int a[],int start,int end,int m,int sum)
{
	bool left,right;
 
	if(sum==m)
		return true;
	else if(start==end)
		return false;
	else if(sum>m)
		return false;
	left=isSubSet(a,start+1,end,m,a[start]+sum);
	if(left==true)
		return true;
	right=isSubSet(a,start+1,end,m,sum);
	if(right==true)
		return true;
	return false;	
}
int main()
{
	int t,n,m,a[20],i;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(i=0;i<n;i++)
			cin>>a[i];
		if(isSubSet(a,0,n,m,0))
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
} 
