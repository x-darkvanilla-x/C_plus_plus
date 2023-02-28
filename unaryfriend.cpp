// Friend function operator overloading

#include<iostream>
using namespace std;

class A
{
	int num;
	
	public:
		A()
		{
			num = 10;
		}
		
		friend void operator ++(A);	
};

void operator ++(A temp)
{
	temp.num = temp.num + 2;
	
	cout << "Value of num : "<<temp.num;
}


int main()
{
	A obj;
	++obj;
}
