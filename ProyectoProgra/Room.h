#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;

class Room
{
private:
	int number;
	int seats;
	int price;
public:
	Room(int _number, int _seats, int price);
	~Room();

};

