#include <iostream>
#include <string>

using namespace std;

struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};

void set_pc(free_throws &ft);
void display(const free_throws &ft);
free_throws & accumlate(free_throws &target, const free_throws &source);

int main()
{
	free_throws one = {"Rick", 13, 14};
	free_throws two = {"Jack", 10, 16};
	free_throws three = {"Jerry", 7 ,9};
	free_throws four = {"Jason", 5 ,8};
	free_throws five = {"Micheal", 6 ,14};
	free_throws team = {"Class 1", 7 ,9};
	
	set_pc(one);
	display(one);
	accumlate(team, one);
	display(team);
	display(accumlate(team, two));
	return 0;
}

void set_pc(free_throws &ft)
{
	if(ft.attempts)
		ft.percent = 100.0 * (float)(ft.made) / (float)(ft.attempts);
	else
		ft.percent = 0.0;
}

void display(const free_throws &ft)
{
	cout << "Name: " << ft.name << endl;
	cout << "Made: " << ft.made << '\t';
	cout << "Attempts: " << ft.attempts << '\t';
	cout << "Percent: " << ft.percent << endl;
}

free_throws & accumlate(free_throws &target, const free_throws &source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}