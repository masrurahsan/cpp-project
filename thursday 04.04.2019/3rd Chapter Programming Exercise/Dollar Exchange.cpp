#include <iostream>
using namespace std;

int main()
{	
  double rate;
  cout << "Enter the exchange rate from dollars to RMB: ";
  cin >> rate;
  
  int conversionType; 
  cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
  cin >> conversionType;
  
  if (conversionType == 0)
  {
  	double dollars;
	cout << "Enter the dollar amount: ";
	double RMB = dollars*rate;
	cin >> dollars;
	cout << "$" << dollars << " is " << RMB << "Yuan" << endl;
  }
  else 
  {
  	double RMB;
	cout << "Enter the RMB amount: ";
	cin >> RMB;
	
	double dollars = RMB*(1/rate);
	cout << RMB << " Yuan" << " is " << "$" << dollars << endl;
  }

  return 0;
}
