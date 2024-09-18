#include "Movie.h"
Movie::Movie(int _year, int _length, string _country, string _review) {
	year = _year;
	length = _length;
	country = _country;
	review = _review;
}

Movie::~Movie() {

}

int Movie::getYear() {
	return year;
}
int Movie::getLength() {
	return length;
}

string Movie::getCountry() {
	return country;
}

string Movie::getReview() {
	return review;
}
