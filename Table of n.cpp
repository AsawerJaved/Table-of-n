#include<iostream>
using namespace std;
int main ()
{
	// declaring variables
	int n;
	
	cout<<"Enter an integer: ";
	cin>>n;
	
	// Calculating & Printing the table
	for(int a=1;a<=10;a++)
	{
		cout<<n<<" x "<<a<<" = "<<n*a<<endl;
	}
  
	return 0;
}
