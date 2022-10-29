#pragma once
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