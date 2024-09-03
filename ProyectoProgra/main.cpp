#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int eleccion = 0;
	bool activo = true;
	printf("Hola! Bienvenido a Nueva Cinema! En que podemos ayudarte?\n");
	printf("1. Para ver el archivo\n2. Para acceder a mantenimiento\n3. Para reservar\n4. Para comprar\n");
	scanf_s("%d", &eleccion);
	while (activo) {
		switch (eleccion) {
		case 1:
			printf("1. Acerca de\n2. Salir\n");
			scanf_s("%d", &eleccion);
			if (eleccion == 1) {
				printf("Licitacion Nueva Cinema\n\n\nProducto desarrollado por: \nVictor Miranda\n\n\nLos derechos de uso de las peliculas estan en una fase dudosa\n");
				printf("pero estaran disponibles dentro de: ''hasta nuevo aviso''");
			}
			if (eleccion == 2) {
				activo = false;
				return 0;
			}

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


	}
	return 0;
}

