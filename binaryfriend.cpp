//Binary friend operator overloading

#include<iostream>
using namespace std;

class A
{
	int num;
	
	public:
		A(int temp)
		{
			num = temp;
		}
		
		friend void operator +(A,A);
};

void operator +(A temp1,A temp2)
{
	A res(0);
	res.num = temp1.num + temp2.num;
	
	cout << "Total : "<<res.num;
}

int main()
{
	A obj1(30),obj2(14);
	obj1 + obj2;
}
