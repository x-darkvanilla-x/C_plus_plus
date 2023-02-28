#include<iostream>
using namespace std;

class A
{
	private :
		int id;
		char name[10];
		
	public:
		void setdata()
		{
			cout << "Enter Id and Name : ";
			cin >> id >> name;
		}
		
		void getdata()
		{
			cout << "ID : "<< id << "\nNAME : "<< name;
		}
};

int main()
{
	A obj;
	obj.setdata();
	obj.getdata();
}
