//SCIENTIFIC CALCULATOR

#include <iostream>
#include <cmath>
using namespace std;

void sum(float a, float b) // for 1. Arithmetic Operations
{
	float c = a + b;
	cout<<a<<" + "<<b<<" = "<<c<<endl;
}
void sub(float a, float b) // for 1. Arithmetic Operations
{
	float c = a - b;
	cout<<a<<" - "<<b<<" = "<<c<<endl;
}
void pro(float a, float b) // for 1. Arithmetic Operations
{
	float c = a * b;
	cout<<a<<" * "<<b<<" = "<<c<<endl;
}
void div(float a, float b) // 1. Arithmetic Operations
{
	if (b == 0)
	{
		cout<<"ERROR!";
	}
	else 
	{
		float c = a / b;
	    cout<<a<<" / "<<b<<" = "<<c<<endl;	
	}
}
void squareRoot(float a) // for 2. Square Root
{
	float b = sqrt(a);
	cout<<"Square root of "<<a<<" = "<< b<<endl;
}
void absoluteValue(float a) // for 3. Absolute Value
{
	float b = abs(a);
	cout<<"Absolute Value of "<<a<<" = "<< b<<endl;
}
void power(float a, float b) // for 4. Power
{
	float c = pow(a, b);
	cout<<a<<" to the power "<<b<<" = "<<c<<endl;
}
// 5. Trigonometric Function


int main()
{	
    int choice ;
    
    cout <<"1. Arithmetic Operations\n";
    cout <<"2. Square Root\n";
    cout <<"3. Absolute Value\n";
    cout <<"4. Power\n";
    cout <<"5. Trigonometric Function\n";
    cout <<"6. Logarthmic Function\n";
    cout <<"Enter your choice: ";
    cin>>choice;
    
    // 1. Arithmetic Operations
    if (choice == 1)
    {
      float a, b, c;
      char op;
    
      cout<<"Enter 1st number: ";
      cin>>a;
      cout<<"Enter 2nd number: ";
      cin>>b;
      cout<<"Enter operator: ";
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
		cout<<"Enter valid operator \n";
	  }
    }
    // 2. Square Root
    else if (choice == 2)
    {
    	float a;
    	char ch;
    	cout<<"Enter a positive number: ";
    	cin>>a;
    	
    	squareRoot(a);
        
	}
	//3. Absolute Value
	else if (choice == 3)
	{
		float a;
    	cout<<"Enter a positive number: ";
    	cin>>a;
    	
		absoluteValue(a);
	}
	// 4. Power
	else if (choice == 4)
	{
	  float a, b, c;
    
      cout<<"Enter base number: ";
      cin>>a;
      cout<<"Enter exponantial number: ";
      cin>>b;
      
      power(a, b);
	}
	// 5. Trigonometric Function
	else if (choice == 5)
	{
		
	}
	
    // Exponential and Logarithmic Functions

    // Factorial
    // Absolute Value
    // Degrees to Radians and Radians to Degrees Conversion
    // Error Handling: Include error handling for division by zero, invalid input, or out-of-range results.
    
	return 0;
}