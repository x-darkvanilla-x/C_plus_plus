#include<iostream>
using namespace std;

int main()
{
	int a,b,temp;
	
	cout << "Enter Two numbers : ";
	cin >> a >> b;
	
	temp = b;
	b = a;
	a = temp;
	
	cout << "After SWapping : "<<a<<" "<<b;
}
