#include <iostream>
#include <cmath>

using namespace std;
const double pi {3.14159};

// PROTOTYPES or DECLARATION
double compute_area_circle(double r);
void area_circle();
double compute_volume_cylinder(double r, double h);
void volume_cylinder();

// DEFINITIONS
int main()
{
	area_circle();
	volume_cylinder();
	
	return 0;
}

void area_circle()
{
	double radius{};
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	
	cout << "The area of the circle with radius " << radius << " is: " 
									<< compute_area_circle(radius) << endl << endl;
}

double compute_area_circle(double r)
{
	return r*r*pi;
}

void volume_cylinder()
{
	double radius{}, height{};
	cout << "Enter cylinder radius and height: ";
	cin >> radius >> height;
	
	cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is: "
									<< compute_volume_cylinder(radius, height) << endl << endl;
}

double compute_volume_cylinder(double r, double h)
{
	return compute_area_circle(r) * h;
}



