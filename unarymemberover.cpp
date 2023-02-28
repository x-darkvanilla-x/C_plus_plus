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
		
		void operator ++()
		{
			num = num + 2;
		}
		
		void show()
		{
			cout << "VAlue of num : "<<num;
		}
};

int main()
{
	A obj;
	++obj;
	obj.show();
}
