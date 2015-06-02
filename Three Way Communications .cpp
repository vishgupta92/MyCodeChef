#include<iostream>
#include<math.h>
using namespace std;
float distance(int a[3][2],int i,int j){
	return sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
}
int main()
{
	int t,r,i,a[3][2];
	cin>>t;
	while(t--){
		cin>>r;
		for(i=0;i<3;i++)
			cin>>a[i][0]>>a[i][1];
		if((distance(a,0,1)<=r && distance(a,0,2)<=r) || (distance(a,1,0)<=r && distance(a,1,2)<=r) || (distance(a,2,0)<=r && distance(a,2,1)<=r))
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
} 
