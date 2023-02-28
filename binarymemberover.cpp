#include<iostream>
using namespace std;

class A
{
	int num;
	
	public:
		A(int test)
		{
			num = test;	
		}
		
		void operator +(A temp)
		{
			int res;
			res = num + temp.num;
			cout << "Addition : "<<res;	
		}	
};

int main()
{
	A obj1(3);
	A obj2(5);
	obj1+obj2;
}
