#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;

class Movie
{
private:
	string name;
	int year;
	int length;
	string country;
	string review;

public:
	Movie(string _name, int _year, int _lenght, string _country, string _review);
	~Movie();

};

