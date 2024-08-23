#include <iostream>
// difference between
// const int * pt;	// a pointer to const int
// int * const pt;	// a const pointer to int
// int const * const pt;	// a const pointer to const int

using namespace std;

int main()
{
	int age = 39;
	int n = 10;
	
	/*		case1		*/
	const int * pt1 = &age;
	// *pt1 = n; INVALID, cannot use *pt1 to modify variable
	pt1 = &n;	// VALID, pt1 can point to another location
	cout << "pt1 = " << *pt1 << endl;	// pt1 = 10
	
	/*		case2		*/
	int * const pt2 = &age;
	// pt2 = &n;	INVALID, cannot point to another location
	*pt2 = n;	//	VALID, can use *pt2 to modify variable
	cout << "pt2 = " << *pt2 << endl;	// pt2 = 10
	
	/*		case3		*/
	const int * const pt3 = &age;
	// pt3 = &n;	INVALID
	// *pt3 = n;	INVALID
	
	/*		case4		*/
	int * pd = &age;
	const int * pt = pd;	// VALID, **one level**assign a non const pointer to a const pointer
	*pd = 41;	// VALID
	//*pt = 42; // INVALID
	
	/*		case5		*/
	const int **pp2;
	int *p1;
	//const int n = 13;
	//pp2 = &p1; INVALID, **two level** pointer assignment
	return 0;
}