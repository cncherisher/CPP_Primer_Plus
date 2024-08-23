#include <iostream>

using namespace std;

char * buildstr(char c, int times);

int main()
{
	char ch;
	int times;
	
	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter a integer: ";
	cin >> times;
	
	char *ps = buildstr(ch, times);
	cout << ps << endl;
	delete []ps;
	ps = buildstr('+', 20);
	cout << ps << "-DONE-" << ps << endl;
	delete []ps;
	return 0;
}

char * buildstr(char c, int times)
{
	char * pstr = new char[times + 1];
	pstr[times] = '\0';
	while(--times >= 0)
	{
		pstr[times] = c;
	}
	return pstr;
}