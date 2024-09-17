#include "Movie.h"
Movie::Movie(string _name, int _year, int _length, string _country, string _review) {
	name = _name;
	year = _year;
	length = _length;
	country = _country;
	review = _review;
}

Movie::~Movie() {

}

