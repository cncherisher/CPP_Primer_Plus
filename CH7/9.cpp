#include <iostream>

using namespace std;

unsigned int c_in_str(const char *str, char ch);

int main()
{
	char mmm[15] = "minimum";
	const char *wail = "ululate";
	
	unsigned int ms = c_in_str(mmm, 'm');	// return 'm' in "minimum" appear times
	unsigned int us = c_in_str(wail, 'u');	// return 'u' in "ululate" appear times
	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;
	return 0;
}

unsigned int c_in_str(const char *str, char ch)
{
	unsigned int count = 0;
	while(*str)	// '\0' is actually 0 
	{
		if(*str == ch)
			count ++; 
		str ++;
	}
	return count;
}