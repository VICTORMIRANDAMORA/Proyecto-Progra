#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;

class Schedule
{
private:
	string day;
	int startHour;
	int finishHour;
public:
	Schedule(string _day, int _startHour, int _finishHour);
	~Schedule();

};

