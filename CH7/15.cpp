#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const std::array<std::string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(std::array<double, Seasons> *pa);
void show(const std::array<double, Seasons> *pa);

int main()
{
	std::array<double, Seasons> expenses;
	fill(&expenses);
	show(&expenses);
	return 0;
}

void fill(std::array<double, Seasons> *pa)
{
	using namespace std;
	for(int i = 0;i < Seasons; ++i)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*pa)[i];
	}
}

void show(const std::array<double, Seasons> *pa)
{
	using namespace std;
	double total = 0.0;
	cout << endl << "EXPENSES: " << endl;
		for(int i = 0; i < Seasons; ++i)
	{
		cout << "Snames[i]" << ": $" << (*pa)[i] << endl;
		total +=  (*pa)[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
