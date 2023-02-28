// Function Overloading

#include<iostream>
using namespace std;

void area(int l,int br)
{
	cout << "Area of Rectangle is : "<<l*br;
}

void area(int r)
{
	cout << "Area of Circle is : "<<r*r*3.14;	
}

void area(float b,float h)
{
	cout << "Area of Triange is : "<<0.5*b*h;
}

int main()
{
	int l,br,r;
	float b,h;
	
	cout << "Enter length and Breadth od Rectangle : ";
	cin>>l>>br;
	area(l,br);
	
	cout << "\n\nEnter Radius : ";
	cin>>r;
	area(r);
	
	cout << "\n\nEnter Base and Height of the Triangle : ";
	cin>>b>>h;
	area(b,h);
}
