#include<iostream>
using namespace std;

int main()
{	
	int total_no_product;
	float total_amount;
	cout<<"Welcome to our shop";
	cout<<"\n\nTJU SUPER SHOP";
	cout<<"\n\nTotal product=";
	cin>>total_no_product;
	cout<<"\n";
	for(int i=1;i<=total_no_product;i++ ){
		float product_amount;
		cout<<i<<".";
//		cin>>product_amount;
		total_amount = total_amount +product_amount;
		cout<<"\n";
	}
	
	cout<<"Total Bill: "<<total_amount;
	return 0;
}
