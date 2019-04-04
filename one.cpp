#include<iostream>
using namespace std;

int main()
{	
	double farenheit;
	cout<< "enter a degree of farenheit";
	cin>> farenheit;
	
	double celsius= (5.0/9)*(farenheit-32);
	cout << "farenheit"<< farenheit << "is" << celsius<< "celsius";
	
	return 0;
}
