#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	int i,j,k,f;

	long int aa[50000],bb[50000],cc[50000];
	long int final[50000];

	cin>>a>>b>>c;

	for(i=0;i<a;i++)
		cin>>aa[i];

	for(i=0;i<b;i++)
		cin>>bb[i];

	for(i=0;i<c;i++)
		cin>>cc[i];

	i=j=k=f=0;

	while(i<a && j<b && k<c){
		if((aa[i]==bb[j]) && (aa[i]==cc[k]))
			final[f++]=aa[i++],j++,k++;
		else if(aa[i]==bb[j])
			final[f++]=aa[i++],j++;
		else if(aa[i]==cc[k])
			final[f++]=aa[i++],k++;
		else if(bb[j]==cc[k])
			final[f++]=bb[j++],k++;
		else if(aa[i]<bb[j] && aa[i]<cc[k])
			i++;
		else if(bb[j]<cc[k])
			j++;	
		else
			k++;
	}
	while(i<a && j<b){
		if(aa[i]==bb[j])
			final[f++]=aa[i++],j++;
		else if(aa[i]<bb[j])
			i++;
		else
			j++;	
	}
	while(i<a && k<c){
		if(aa[i]==cc[k])
			final[f++]=aa[i++],k++;
		else if(aa[i]<cc[k])
			i++;
		else 
			k++;
	}
	while(j<b && k<c){
		if(bb[j]==cc[k])
			final[f++]=bb[j++],k++;
		else if(bb[j]<cc[k])
			j++;	
		else
			k++;
	}
	cout<<f<<endl;
	for(i=0;i<f;i++)
		cout<<final[i]<<endl;
	return 0;
}
