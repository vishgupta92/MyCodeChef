#include<iostream>
using namespace std;
int main()
{
	int price,item,rupees;
	int t;
	cin>>t;
	while(t--){
		price=2048;
		item=0;
		cin>>rupees;
		while(price>0){
			item+=rupees/price;
			rupees=rupees%price;
			price/=2;
		}
		cout<<item<<endl;
	}
	return 0;
}
