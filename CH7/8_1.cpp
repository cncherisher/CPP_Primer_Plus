#include <iostream>

using namespace std;

const int Arsize = 8;

int sum_arr(const int *begin, const int *end);

int main()
{
	const int cookies[Arsize] = {1, 2, 4, 8, 16, 32, 64, 128};
	int sum = sum_arr(cookies, cookies + Arsize);
	cout << "Total cookies: " << sum << endl;
	sum = sum_arr(cookies, cookies + 3);
	cout << "First three cookies: " << sum << endl;
	sum = sum_arr(cookies + 4, cookies + 8);
	cout << "Last four cookies: " << sum << endl;
	return 0;
}

int sum_arr(const int *begin, const int *end)
{
	const int *pt;
	int total = 0;
	for(pt = begin; pt != end; ++pt)
	{
		// first value will be calculated
		// last value will not be calculated
		total += *pt;	
	}
	return total;
}