#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	char op;
	
	cout<<"Enter 1st number:\n";
	cin>>a;
	cout<<"Enter 2nd number:\n";
	cin>>b;
	
	cout<<"Enter Operator\n";
	cin>>op;
	
	if (op == '+')
	{
		c = a + b;
		cout << a <<" + "<< b <<" = "<<c<<endl;
		
	}
	else if (op == '-')
	{              
		c = a - b;
		cout << a <<" - "<< b <<" = "<<c<<endl;
	}
	else if (op == '*')
	{              
		c = a * b;
		cout << a <<" * "<< b <<" = "<<c<<endl;
	}
	else if (op == '/')
	{      
	    c = a / b;         
		if (b == 0)
		{
			cout <<"ERROR!"<<endl;
		}
		else 
		{
			cout << a <<" / "<< b <<" = "<<c<<endl;
		}
	}
	else
	{
		cout<<"This C++ calculator can only perform \'+\', \'-\', \'*\', \'/\' operations\n";
	}
	return 0;
}