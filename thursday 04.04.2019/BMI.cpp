#include<iostream>
using namespace std;

int main()
{
	double pound;
	cout<<"input weight in pounds";
	cin>> pound;
	
	double kg=(0.4539237*pound);
	cout<< "\npound" << pound << "is" << kg << "in kg";
	
	
	double inch;
	cout<<"\ninput height in inch";
	cin>> inch;
	
	double meter=(0.0254*inch);
	cout<< "\ninch" << inch << "is" << meter << "in meter";
	
	double BMI= kg / (meter * meter);
	cout<< "BMI is ";
	
	if(BMI<=18.5){
		cout<<"Underweight";
	}
	
	else if(BMI=25){
		cout<<"Normal";
	}
	else if(BMI>=30){
		cout<<"Overweight";
	}
	return 0;
}
