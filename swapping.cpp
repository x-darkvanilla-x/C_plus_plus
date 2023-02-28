// Swapping with third Variable and Without Third Variable

#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout << "Enter two numbers : ";
	cin >> a>>b;
	
	c = b;
	b = a;
	a = c;
	
	cout << "After Swapping : "<<a<<" "<<b;
	
	// method 2
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	cout << "\nAfter Swapping Again : "<<a<<" "<<b;
}
