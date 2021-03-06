// Quiz2.cpp : Defines the entry point for the console application.
//


#include <iostream>
using namespace std;

class Circle
{
 private:
	double radius; 
	double pi = 3.1419; 
 public:
	Circle()
	{
		radius = 0.0;
	}
	Circle(double rad)
	{
		radius = rad;
	}
	void setRadius(double rad)
	{
		radius = rad;
	}
    double getArea()
	{
		double area = pi * radius*radius; 
		return area; 
	}
    double getDiameter()
	{
		double diameter = radius*2;
		return diameter;
	}
    double getCircumference()
	{
		double circumference = 2*pi*radius; 
		return circumference; 
	}
};

int main()
{
	Circle c1; 

	double radius;
	cout << "What is the radius?";
	cin >> radius; 

	c1.setRadius(radius);
	cout << "The area is " << c1.getArea() << endl;
	cout << "The diameter is " << c1.getDiameter() << endl;
	cout << "The circumference is " << c1.getCircumference() << endl; 

	system("pause");
    return 0;
}; 

