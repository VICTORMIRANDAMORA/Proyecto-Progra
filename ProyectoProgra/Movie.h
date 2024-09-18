#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;

class Movie
{
private:
	int year;
	int length;
	string country;
	string review;

public:
	Movie(int _year, int _lenght, string _country, string _review);
	~Movie();
	int getYear();
	int getLength();
	string getCountry();
	string getReview();

};

