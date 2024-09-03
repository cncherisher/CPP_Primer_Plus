#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	fstream fcout;
	const char *fn = "ep_data.txt";
	fcout.open(fn);
	if(!fcout.is_open())
	{
		cout << "Can't open " << fn << "! Bye! " << endl;
		exit(EXIT_FAILURE);
	}
	
	return 0;
}