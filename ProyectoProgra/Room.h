#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;

class Room
{
private:
	int rows;
	int columns;
	int price;
	string** seats; 
	int number = 0;
public:
	Room(int _rows, int columns, int price);
	~Room();
	void ShowSeats();
	void FillSeats();
	int getSeats();
	int getPrice();
	int getTotalPrice();
};

