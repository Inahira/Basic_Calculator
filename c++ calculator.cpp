/*#include <iostream>
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
}*/

//building same calculator using functions
#include <iostream>
using namespace std;

//USER DEFINED FUNCTIONS

void sum(float a, float b) //function for addition
{
		float c = a + b;
		cout << a <<" + "<< b <<" = "<<c<<endl;
}
void sub(float a, float b) //function for subtraction
{
		float c = a - b;
		cout << a <<" - "<< b <<" = "<<c<<endl;
}
void pro(float a, float b) //function for product
{
		float c = a * b;
		cout << a <<" * "<< b <<" = "<<c<<endl;
}
void div(float a, float b) //function for division
{
		float c;
		if (b == 0)
		{
			cout <<"ERROR!"<<endl;
		}
		else 
		{
			c = a/b;
			cout << a <<" / "<< b <<" = "<<c<<endl;
		}
}

//MAIN FUNCTION
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
		sum(a, b);
	}
	else if (op == '-')
	{              
	    sub(a, b);
	}
	else if (op == '*')
	{              
	    pro(a, b);
	}
	else if (op == '/')
	{      
	    div(a, b);
	}
	else
	{
		cout<<"This C++ calculator can only perform \'+\', \'-\', \'*\', \'/\' operations\n";
	}
	
	return 0;
}