#include<iostream>
using namespace std;
int visited[1001]={0};
int connected[10001]={0};
int main(){
  int conn,k,n,t,ar[1001],i,number=0;
  cin>>n;
  for(i=1;i<=n;i++)
  	cin>>ar[i];
  k=1;
  for(i=1;i<=n;i++){
  	if(!visited[i]){
  		conn=i;
  		while(!visited[conn]){
  			visited[conn]=1;
  			connected[k++]=conn;
  			conn=ar[conn];
  		}
  		connected[k++]=conn;
  		connected[k++]=0;
  		number++;
  	}
  }
  k--;
  cout<<number<<endl;
  for(i=1;i<k;i++){
  	if(connected[i])
  		cout<<connected[i]<<" ";
  	else
  		cout<<endl;
  }
  return 0;
}
