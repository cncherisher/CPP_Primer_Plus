#include <iostream>

using namespace std;

void countdown(int n);

int main()
{
	countdown(4);
	return 0;
}

void countdown(int n)
{
	cout << "Counting down..." << n << endl;	// statememnt 1
	if(n > 0)	// test
		countdown(n-1);	// recurs(arguments)
	cout <<  n << ": Kaboom!" << endl;			// statememnt 2
}