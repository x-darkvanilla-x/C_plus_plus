#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout << "Enter Two numbers : ";
	cin >> a >> b;
	
	a = a+b; // 10+20 = 30
	b = a-b; // 30-20 = 10
	a = a-b; // 30-10 = 20
	cout << "After SWapping : "<<a<<" "<<b;
}
