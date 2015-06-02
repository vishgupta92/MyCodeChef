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
bool isPalin(int n){
	int rev=reverse(n);
	if(rev==n)
		return true;
	else
		return false;
}
bool isPrime(int n){
	if(n==2)
		return true;
	if(n%2==0)
		return false;
	for (int i=3;i<=sqrt(n);i+=2)
        if (n%i==0)
            return false;
    return true;
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
	cin>>n;
	while(1){
		if(isPalin(n) && isPrime(n)){
			cout<<n;
			break;
		}
		n=nextPalin(n);
	}
	return 0;
}
