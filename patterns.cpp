// patterns

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	
	for(i=0;i<=5;i++)
	{
		for(j=0;j<i;j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	
	cout << "\n\n";
	
	for(i=5;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	
	cout << "\n\n";
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout << j;
		}
		cout << "\n";
	}
	
	cout << "\n\n";
	
	for(i=0;i<=5;i++)
	{
		for(j=0;j<i;j++)
		{
			cout << i;
		}
		cout << "\n";
	}
	
	cout << "\n\n";
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==2 || i==3) && (j==2 || j==4 || j==3))
			{
				cout << " ";
			}
			else
			{
				cout << "*";
		    }		
		}
		cout << "\n";
	}
	
	cout << "\n\n";
	
	for(i=0;i<=4;i++)
	{
		for(j=0;j<i;j++)
		{
			cout << i*i << " ";
		}
		cout << "\n";
	}
	
	cout << "\n\n";
	
	for(i=0;i<=4;i++)
	{
		for(j=0;j<i;j++)
		{
			if(i!=3)
			cout << i*i << " ";
			else
			cout << i << " ";
		}
		cout << "\n";
	}
	
	cout << "\n\n";
	
	for(i=0;i<=4;i++)
	{
		for(j=0;j<i;j++)
		{
			cout << i*j << " ";
		}
		cout << "\n";
	}

}
