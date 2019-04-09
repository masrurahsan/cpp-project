#include<iostream>
using namespace std;

int main()
{
	double bill;
	cout << "enter the bill ";
	cin >> bill;
	
	double tips,tipsrate,total_bill;
	cout <<"enter the gratuity rate ";
	cin>>tipsrate;
	
	tips= (tipsrate * bill) / 100;
	total_bill= tips + bill;
    cout << "the gratuity is $" << tips <<" and total bill is $"<< total_bill;
	
	
	return 0;
}
