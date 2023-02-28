// Reverse

#include<iostream>
using namespace std;

int main()
{
	int n,rev=0,sum=0,rem,org;
	
	cout << "Enter a number : ";
	cin>>n;
	
	org = n;
	
	while(n!=0)
	{
		rem = n % 10;
		rev = rev*10+rem;
		n = n/10;
	}
	
	cout << "Reverse of the Number is : "<<rev;
	
	// checking palindrome or not
	if(rev == org)
		cout <<"\nThis Number is a Palindrome";
	else
		cout <<"\nThis Number is not a Palindrome";
		
		
	n = org;
	
	while(n!=0)
	{
		rem = n % 10;
		sum = sum + (rem*rem*rem);
		n = n/10;
	}
	
	if(sum == org)
		cout << "\nThis Number is a Armstrong Number";
	else
		cout << "\nThis Number is Not a Armstrong Number";
}
