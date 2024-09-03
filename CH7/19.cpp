#include <iostream>

using namespace std;

const double *f1(const double *arr, int n);
const double *f2(const double arr[], int n);
const double *f3(const double arr[], int n);

int main()
{
	double av[3] = {1112.3, 1542.6, 2227.9};
	
	// part1
	// pointer to a function
	const double * (*p1)(const double *, int) = f1;
	// c++11 and above support this
	auto p2 = f2;
	cout << "PART1: Addr   Value" << endl;
	cout << (*p1)(av, 3)	<< ": " << *(*p1)(av, 3) <<endl;	// (*p1)(av, 3) = f1(av, 3)
	cout << p2(av, 3)	<< ": " << *p2(av, 3) << endl;
	// part2
	const double *(*pa[3])(const double *, int) = {f1, f2, f3};
	auto pb = pa; // 函数指针数组的首地址
	cout << "PART2: Addr   Value" << endl;
	for(int i = 0; i < 3; ++i)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	for(int i = 0; i < 3; ++i)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	// part3
	auto pc = &pa;
	const double *(*(*pd)[3])(const double *, int) = &pa;
	cout << "PART3: Addr   Value" << endl;
	cout << (*pc)[0](av, 3);	// call f1(av, 3), return const double *
	cout << ": " << *(*pc)[0](av, 3) << endl;	// call f1(av, 3), return const double
	const double *pdb = (*pd)[1](av, 3);	// call f2(av, 3), return const double *
	cout << pdb << ": " << *pdb << endl;
	cout << (*pd)[2](av, 3) << ": " << *(*pd)[2](av, 3) << endl;	// call f3(av, 3)
	return 0;
}

const double *f1(const double *arr, int n)
{
	return arr;
}

const double *f2(const double arr[], int n)
{
	return arr + 1;
}

const double *f3(const double arr[], int n)
{
	return arr + 2;
}