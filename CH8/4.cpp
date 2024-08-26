#include <iostream>

using namespace std;

void swapr(int &a, int &b);
void swapp(int *pa, int *pb);
void swapv(int a, int b);

int main()
{
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1 = " << wallet1 << endl;
	cout << "wallet2 = " << wallet2 << endl;

	cout << "Using refernece to swap contents:" << endl;
	swapr(wallet1, wallet2);
	cout << "wallet1 = " << wallet1 << endl;
	cout << "wallet2 = " << wallet2 << endl;

	cout << "Using pointer to swap contents:" << endl;
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = " << wallet1 << endl;
	cout << "wallet2 = " << wallet2 << endl;

	cout << "Trying to use passing by values:" << endl;
	swapv(wallet1, wallet2);
	cout << "wallet1 = " << wallet1 << endl;
	cout << "wallet2 = " << wallet2 << endl;
	return 0;
}

void swapr(int &a, int &b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void swapp(int *pa, int *pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void swapv(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}