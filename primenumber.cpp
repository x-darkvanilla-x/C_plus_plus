// Prime or not

#include<iostream>
using namespace std;

int main()
{
	int n,i,c=0;
	
	cout << "Enter a number : ";
	cin>>n;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{	
			cout << "Not Prime";
			c++;
			break;
		}
	}
	
	if(c == 0)
		cout << "Prime Number";
}
