#include <iostream>

using namespace std;

/* Program to Check whether 100th place digit of the entered 
4 digit number is even or odd*/

int main() 
{
	int integer,x,y;
	cout<<"\n\n\n\t\t\tEnter a four Digit Number: "; cin>>integer;
	
	x=integer/100; // here x will lead the entered value to unit place of the requied digit
	
	y=x%10; // y is the required 100th place digit
	cout<<endl<<endl;
	cout<<"****************************************************************\n\n";
	if (y%2==0)  // if the 100th place digit is even then this "if" will execute 
	
	cout<<"\n\t\t\tThe 100th place digit is EVEN\n ";
	
	else    // if the 100th place digit is odd then this "else" will execute 
	
	cout<<"\n\t\t\tThe 100th place digit is ODD\n ";
	return 0;
}
