//SCIENTIFIC CALCULATOR

#include <iostream>
#include <cmath>
using namespace std;

void sum(float a, float b) // for 1. Arithmetic Operations
{
	cout<<"\n\t ADDITION\n\n";
	float c = a + b;
	cout<<"\t"<<a<<" + "<<b<<" = "<<c<<endl;
}
void sub(float a, float b) // for 1. Arithmetic Operations
{
	cout<<"\n\t SUBTRACTION\n\n";
	float c = a - b;
	cout<<"\t"<<a<<" - "<<b<<" = "<<c<<endl;
}
void pro(float a, float b) // for 1. Arithmetic Operations
{
	cout<<"\n\t MULTIPLICATION\n\n";
	float c = a * b;
	cout<<"\t"<<a<<" * "<<b<<" = "<<c<<endl;
}
void div(float a, float b) // 1. Arithmetic Operations
{
	cout<<"\n\t DIVISION\n\n";
	if (b == 0)
	{
		cout<<"\tERROR!";
	}
	else 
	{
		float c = a / b;
	    cout<<"\t"<<a<<" / "<<b<<" = "<<c<<endl;	
	}
}
void squareRoot(float a) // for 2. Square Root
{
	cout<<"\n\t SQUARE ROOT\n\n";
	float b = sqrt(a);
	cout<<"\tSquare root of "<<a<<" = "<< b<<endl;
}
void absoluteValue(float a) // for 3. Absolute Value
{
	cout<<"\n\t ABSOLUTE VALUE\n\n";
	float b = abs(a);
	cout<<"\tAbsolute Value of "<<a<<" = "<< b<<endl;
}
void power(float a, float b) // for 4. Power
{
	cout<<"\n\t POWER\n\n";
	float c = pow(a, b);
	cout<<"\t"<<a<<" to the power "<<b<<" = "<<c<<endl;
}
void sine(float a) // 5. sine Function
{
	cout<<"\n\t SINE\n\n";
	float b = sin(a);
	cout<<"\tsin("<<a<<") = "<<b<<endl;
}
void cosine(float a) // 5. cosine Function
{
	cout<<"\n\t COSINE\n\n";
	float b = cos(a);
	cout<<"\tcos("<<a<<") = "<<b<<endl;
}
void tangent(float a) // 5. tangent Function
{
	cout<<"\n\t TANGENT\n\n";
	float b = tan(a);
	cout<<"\ttan("<<a<<") = "<<b<<endl;
}
void logarthmic(float a) // 6. Logarthmic Function
{
	cout<<"\n\t LOGARTHM\n\n";
	float b = log(a);
	cout<<"\tlog("<<a<<") = "<<b<<endl;
}

int main()
{	
    int choice ;
    cout<<"\n\tSCIENTIFIC CALCULATOR\n";
    cout <<"\n\t1. Arithmetic Operations\n";
    cout <<"\t2. Square Root\n";
    cout <<"\t3. Absolute Value\n";
    cout <<"\t4. Power\n";
    cout <<"\t5. Trigonometric Function\n";
    cout <<"\t6. Logarthmic Function\n\n";
    cout <<"\tEnter your choice: ";
    cin>>choice;
    
    // 1. Arithmetic Operations
    if (choice == 1)
    {
      float a, b, c;
      char op;
    
      cout<<"\tEnter 1st number: ";
      cin>>a;
      cout<<"\tEnter 2nd number: ";
      cin>>b;
      cout<<"\tEnter operator: ";
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
		cout<<"\tEnter valid operator \n";
	  }
    }
    // 2. Square Root
    else if (choice == 2)
    {
    	float a;
    	char ch;
    	cout<<"\tEnter a positive number: ";
    	cin>>a;
    	
    	squareRoot(a);
        
	}
	//3. Absolute Value
	else if (choice == 3)
	{
		float a;
    	cout<<"\tEnter a positive number: ";
    	cin>>a;
    	
		absoluteValue(a);
	}
	// 4. Power
	else if (choice == 4)
	{
	  float a, b, c;
    
      cout<<"\tEnter base number: ";
      cin>>a;
      cout<<"\tEnter exponantial number: ";
      cin>>b;
      
      power(a, b);
	}
	// 5. Trigonometric Function
	else if (choice == 5)
	{
	 int choice;
	 cout<<"\n\t TRIGINIMETRY FUNCTION\n\n";
	 cout <<"\t1. Sine\n";
     cout <<"\t2. Cosine\n";
     cout <<"\t3. Tangent\n\n";
     cout <<"\tEnter your choice: ";
     cin>>choice;
      if (choice == 1)
      {
      	float a;
      	cout<<"\tEnter an angle: ";
      	cin>>a;
      	sine(a);
	  }
      else if (choice == 2)
      {
      	float a;
      	cout<<"\tEnter an angle: ";
      	cin>>a;
      	cosine(a);
	  }
      else if (choice == 3)
      {
      	float a;
      	cout<<"\tEnter an angle: ";
      	cin>>a;
      	tangent(a);
	  }
	  else
	  {
	  	 cout<<"\tinvalid choice  \n";
	  }
	}
	else if (choice == 6)
	{
	    float a;
      	cout<<"\tEnter a number: ";
      	cin>>a;
      	
      	logarthmic(a);
	}
	else
	{
		cout<<"\n\tYOU CAN ONLY PERFORM \n";
		cout <<"\t1. Arithmetic Operations\n";
        cout <<"\t2. Square Root\n";
        cout <<"\t3. Absolute Value\n";
        cout <<"\t4. Power\n";
        cout <<"\t5. Trigonometric Function\n";
        cout <<"\t6. Logarthmic Function\n";
	}
    // Factorial
    // Absolute Value
    // Degrees to Radians and Radians to Degrees Conversion
    // Error Handling: Include error handling for division by zero, invalid input, or out-of-range results.
    
	return 0;
}