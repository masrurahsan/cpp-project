#include<iostream>
using namespace std;

int main()
{
	int input_month;
	cout<<"please input day";
	cin>>input_month;
	
//	int input_day=input_month%30;
//	int input_months=input_day/30;
	
//	cout<<"day"<< input_day;
//	cout<<"month"<< input_months;

	cout<< "day : "<<input_month%30;
	cout<< " month : "<<input_month/30;
	return 0;
}
