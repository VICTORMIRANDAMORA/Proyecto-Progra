#include "Room.h"
#include <string>
Room::Room(int _rows, int _columns, int _price) {
	rows = _rows;
	columns = _columns;
	price = _price;

	seats = new string * [_rows];
	for (int i = 0; i < _rows; i++) {
		seats[i] = new string[columns];
	}

}

Room::~Room() {

}

void Room::ShowSeats() {
	char letter = 65;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			seats[i][j] = to_string(i + 1) + string(1, letter + j);
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (seats[i][j] == "R") {
				printf("%s R ", (to_string(i + 1) + string(1, letter + j)).c_str());
			}
			else if (seats[i][j] == "C") {
				printf("%s C ", (to_string(i + 1) + string(1, letter + j)).c_str());
			}
			else {
				printf("%s %c ", seats[i][j].c_str(), 254);
			}
		}
		printf("\n");
	}
}

void augmentNumber(int* _number) {
	*_number = *_number + 1;
}

void Room::FillSeats() {
	int row;
	char column;
	char state;
	char election = 's';
	do {
		printf("Por favor, ingrese el asiento que desea reservar\n");
		scanf_s("%d %c", &row, &column,1);

		int rowIndex = row - 1;
		int columnIndex = column - 'A';

		if (rowIndex >= 0 && rowIndex < rows && columnIndex >= 0 && columnIndex < column) {
			if (seats[rowIndex][columnIndex] != "C" && seats[rowIndex][columnIndex] != "R") {
				seats[rowIndex][columnIndex] = "R ";
				printf("El asiento %d%c ha sido reservado.\n", row, column);
				if (seats[rowIndex][columnIndex] == "R") {
					augmentNumber(&number);
				}
			}
			else {
				printf("El asiento %d%c ya ha sido reservado o comprado\nno puede reservarlo\n", row, column);
			}
		}
		else {
			printf("Asiento invalido\n");
		}
		printf("Quieres reservar otro tiquete?\ns/n\n");
		scanf_s("%c", &election,1);
		if (election == 'N' || election == 'n') {
			printf("Gracias por reservar\n");
		}
		else {
			printf("Letra invalida, intente de nuevo\n");
		}
	} while (election != 'n' && election != 'N');
}

int Room::getSeats() {
	return rows * columns;
}

int Room::getPrice() {
	return price;
}

int Room::getTotalPrice() {
	return number * price;
}