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
		
		friend int operator <(A,A);	
};

int operator <(A temp1,A temp2)
{
	if(temp1.num>temp2.num)
		return temp1.num;
	else
		return temp2.num;
}

int main()
{
	A obj1(40),obj2(30);
	int i = obj1<obj2;
	cout << i <<" is greater";
}
