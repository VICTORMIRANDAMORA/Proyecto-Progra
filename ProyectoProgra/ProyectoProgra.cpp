#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int eleccion = 0;
	printf("Hola! Bienvenido a Nueva Cinema! En que podemos ayudarte?\n");
	printf("1. Para ver el archvo\n2. Para acceder a mantenimiento\n3. Para reservar\n4. Para comprar\n");
	scanf_s("%d", &eleccion);
	switch (eleccion) {
	case 1:
		printf("ahora deberias estar viendo el archivo\n");
		break;
	case 2:
		printf("Debes tener accceso para este menu\n");
		break;
	case 3:
		printf("Vas a reservar un espacio en la sala\n");
		break;
	case 4:
		printf("vas a pagar el tiquete que reservaste\n");
		break;
	}



	return 0;
}

