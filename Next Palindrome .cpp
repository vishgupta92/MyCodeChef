#include<iostream>
#include<cmath>
using namespace std;
int reverse(int n){
	int t=n,rev=0;
	while(t){
		rev=t%10+rev*10;
		t/=10;
	}
	return rev;
}
int countdigit(int n){
	int c=1;
	if(n)
		c=(int)log10(n)+1;
	return c;
}
int nextPalin(int n){
	int answer,lower,upper;
	int dig=countdigit(n);
	int div=(int)pow(10,dig/2);
	if(dig&1){
		lower=n/div;
		int mid=lower%10;
		lower/=10;
		upper=n%div;
		if(reverse(lower)<=upper)
            mid++;
    	if(mid==10){
            lower++;
            mid=0;
        }
        answer = lower*div*10 + mid*div + reverse(lower);
	}
	else{
		lower=n/div;
		upper=n%div;
		if(reverse(lower)<=upper)
            lower++;
    	answer = lower*div + reverse(lower);
	}
	return answer;
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<nextPalin(n)<<endl;
	}
	return 0;
} 
