#include <iostream>
using namespace std;

int main()
{
	double weight;
	cout << "Enter weight in pounds: ";
	cin >> weight;
	
	double feet;
	cout << "Enter feet: ";
	cin >> feet;
	
	double inches;
	cout << "Enter inches: ";
	cin >> inches;

	double height = feet*12 + inches;

  
	double bmi = weight * 0.45359237 /((height * 0.0254) * (height * 0.0254));
	cout << "Your BMI is " << bmi << endl;
	
	if (bmi < 18.5){
		cout << "Underweight" << endl;
	}
    
	else if (bmi < 25){
		cout << "Normal" << endl;
	}
    
	else if (bmi < 30){
		cout << "Overweight" << endl;
	}
    
	else {
		cout << "Obese" << endl;
	}
    

	return 0;
}
