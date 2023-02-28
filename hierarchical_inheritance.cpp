// Hirerchical Inheritance

#include<iostream>
using namespace std;

class Animal
{
	public:
		void eat()
		{
			cout << "\nEating";
		}
};

class Dog : public Animal
{
	public:
		void bark()
		{
			cout << "\nBarking";
		}
};

class Cat : public Animal
{
	public:
		void meow()
		{
			cout << "\nMeowing";
		}
};

int main()
{
	Dog d1;
	Cat c1;
	
	cout <<"\nDog info";
	d1.eat();
	d1.bark();
	cout <<"\n\nCat info";
	c1.eat();
	c1.meow();
}
