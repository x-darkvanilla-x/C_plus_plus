// Single inheritance

#include<iostream>
using namespace std;

class Animal
{
	public:
		void eat()
		{
			cout << "Eating....";
		}
};

class Dog : public Animal
{
	public:
		void bark()
		{
			cout << "\nBarking....";
		}
};

int main()
{
	Dog d1;
	d1.eat();
	d1.bark();
}
