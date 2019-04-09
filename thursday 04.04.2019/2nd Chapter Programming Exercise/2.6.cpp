#include<iostream>
using namespace std;

int main()
{
	int number;
	cout<< "enter a number";
	cin >> number;
	
	int lastdigit = number%10;
	number= number / 10;
	
	int secondlastdigit = number%10;
	number= number / 10;
	
	int thirdlastdigit = number%10;
	number= number / 10;
	
	int sumofdigit = lastdigit + secondlastdigit + thirdlastdigit;
	cout << "the sum of digits is" << sumofdigit;
	
	return 0;
}
