#include "Schedule.h"

Schedule::Schedule(string _movie, string _day, string _startHour, string _finishHour) {
	movie = _movie;
	day = _day;
	startHour = _startHour;
	finishHour = _finishHour;

}

Schedule::~Schedule() {

}

string Schedule::getName() {
	return movie;
}

string Schedule::getStart() {
	return startHour;
}

string Schedule::getFinish() {
	return finishHour;
}