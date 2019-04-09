#include<iostream>
using namespace std;

int main()
{
	double celsius;
	cout<< "enter a degree in celsius";
	cin>> celsius;
	
	double fahrenheit= (9.0/5)* celsius + 32;
	cout<< "celsius " << celsius << " is " << "fahrenheit " << fahrenheit;
	
	return 0;
}
