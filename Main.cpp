#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date(int month = 1, int day = 1, int year = 2019);
	void display();
};

Date::Date(int month, int day, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

void Date::display()
{
	cout << month << "/" << day << "/" << year << endl;
}

int main()
{
	Date v(2, 14, 2019);
	v.display();
}