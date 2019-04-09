#include<iostream>
using namespace std;

int main()
{
	double radius;
	cout<< "enter the radius";
	cin>> radius;
	
	double length;
	cout<< "\nenter the length";
	cin>> length;
	
	double area= radius*radius*3.14167;
	cout<< "the area is" << area << "for radius" << radius;
	
	double volume= area*length;
	cout<< "the volume is" << volume << "for area and length" << area and length;
	
	return 0;
}
