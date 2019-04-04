#include <iostream>
using namespace std;

int main()
{	
	int input_day;
	cout<<"please input day : ";
	cin>> input_day;
	
	
	int total_month=input_day/30;
	int total_day=input_day%30;
	
	cout<<"month"<<total_month; 
	cout<<"\nday"<<total_day;
	return 0;
}
