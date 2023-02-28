// Multilevel Inheritance

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
		
		void show_A()
		{
			cout << "\nValue of A is : "<<a;
		}
};

class B : public A
{
	private:
		int b;
	
	public:
		B()
		{
			b = 20;
		}
		
		void show_B()
		{
			cout << "\nValue of B is : "<<b;
		}
};

class C : public B
{
	private:
		int c;
	
	public:
		C()
		{
			c = 30;
		}
		
		void show_C()
		{
			cout << "\nValue of C is : "<<c;
		}
};

int main()
{
	C obj;
	
	obj.show_A();
	obj.show_B();
	obj.show_C();
}
