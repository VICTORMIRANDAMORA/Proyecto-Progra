#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;

class Schedule
{
private:
	string movie;
	string day;
	string startHour;
	string finishHour;
public:
	Schedule(string _movie, string _day, string _startHour, string _finishHour);
	~Schedule();
	string getName();
	string getStart();
	string getFinish();

};

