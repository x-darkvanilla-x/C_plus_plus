// Constructor 

#include<iostream>
using namespace std;

class A
{
	private:
		int a;
		
	public:
		A()
		{
			a = 10;
		}
		
		void show()
		{
			cout <<"Value of A is : "<<a;
		}
};

int main()
{
	A obj;
	obj.show();
}
