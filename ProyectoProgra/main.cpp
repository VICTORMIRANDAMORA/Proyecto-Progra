#include <iostream>
#include <stdio.h>
#include "Movie.h"
#include "Room.h"
#include "Schedule.h"

using namespace std;

int main() {
	int eleccion = 0;
	int contrasena = 0;
	int cedula = 0;
	int tarjeta = 0;
	int sala1 = 25;
	int sala2 = 20;
	int sala3 = 30;
	bool activo = false;
	printf("Hola! Bienvenido a Nueva Cinema! En que podemos ayudarte?\n");
	do {
		printf("1. Archivo\n2. Mantenimiento\n3. Reservar\n4. Comprar\n");
		scanf_s("%d", &eleccion);
		switch (eleccion) {
		case 1:
			do {
				printf("1. Acerca de\n2. Salir\n3.Regresar al menu principal\n");
				scanf_s("%d", &eleccion);
				switch (eleccion) {
				case 1:
					printf("Licitacion Nueva Cinema SA\n\n\nProducto desarrollado por: \nVictor Miranda\n\n\nLos derechos de uso de las peliculas estan en una fase dudosa\n");
					printf("pero estaran disponibles dentro de: ''hasta nuevo aviso''\n");
					break;
				case 2:
					printf("Saliendo del programa");
					activo = true;
					break;
				case 3:
					printf("Regresando al menu principal\n\n\n\n");
					break;
				default:
					printf("Opcion no valida, intente de nuevo");
					break;
				}
			} while (eleccion != 3 && !activo);
			break;
		case 2:
			printf("Debes tener acceso para ingresar\nIngresa la clave\n");
			scanf_s("%d", &contrasena);
			if (contrasena == 12345) {
				printf("Acceso otorgado\n");
				do {
					printf("1. Peliculas\n2. Salas\n3. Horarios\n4. Regresar al menu anterior\n");
					scanf_s("%d", &eleccion);
					switch (eleccion) {
					case 1:
						printf("Deadpool y Wolverine\nIntensamente 2\nOppenheimer\n");
						break;
					case 2:
						do {
							printf("1. Sala uno\n2. Sala dos\n3. Sala tres\n4. Regresar al menu anterior\n");
							scanf_s("%d", &eleccion);
							switch (eleccion) {
							case 1:
								printf("Sala uno\nTamano: 25 butacas\nPrecio: 2300 colones por persona\n");
							case 2:
								printf("Sala dos\nTamano: 20 butacas\nPrecio: 2000 colones por persona\n");
							case 3:
								printf("Sala tres\nTamano: 30 butacas\nPrecio: 2500 colones por persoa\n");
							case 4:
								printf("Regresando al menu anterior\n\n\n\n\n\n\n\n");
								break;
							default:
								printf("Opcion invalida, intentelo de nuevo\n");
							}

						} while (eleccion != 4 && !activo);
						break;
					case 3:
						printf("Deadpool y Wolverine: \n3/10/2024: Inicia 10:00 pm--Termina 11:45 pm\n");
						printf("Deadpool y Wolverine: \n5/10/2024: Inicia 9:30 pm--Termina 11:15 pm\n");
						printf("Intensamente 2: \n3/10/2024: Inicia 2:30 pm--Termina 4:00 pm\n");
						printf("Intensamente 2: \n3/10/2024: Inicia 6:30 pm--Termina 8:00 pm\n");
						printf("Oppenheimer: \n5/10/2024: Inicia 6:30 pm--Termina 8:30 pm\n");
						printf("Oppenheimer: \n7/10/2024: Inicia 4:00 pm--Termina 6:00 pm\n");
						break;
					case 4:
						printf("Regresando al menu anterior\n\n\n\n\n\n\n\n");
						break;
					}
				} while (eleccion != 4 && !activo);
			}
			break;
		case 3:
			do {
				printf("Escoje la pelicula que desees reservar\n");
				printf("1. Deadpool y Wolverine\n2. Intensamente 2\n3. Oppenheimer\n4. Regresar al menu anterior\n");
				scanf_s("%d", &eleccion);
				switch (eleccion) {
				case 1:
					do {
						printf("Escoge un horario: \n");
						printf("1. Deadpool y Wolverine\nSala tres\n3/10/2024 Inicia 10:00 pm--Termina 11:45 pm\n");
						printf("2. Deadpool y Wolverine\nSala uno\n5/10/2024 Inicia 9:30 pm--Termina 11:15 pm\n");
						printf("3. Para regresar al menu anterior\n");
						scanf_s("%d", &eleccion);
						switch (eleccion) {
						case 1:
							for (int i = 0; i < 6; i++) {
								for (int j = 0; j < 5; j++) {
									printf("%c", 219);
									printf(" ");
								}
							}
							printf("Cuantas butacas deseas reservar?\n");
							scanf_s("%d", &eleccion);
							if (eleccion <= sala3) {
								printf("Se han reservado ");
								printf("%d", eleccion);
								printf(" butacas");
								sala3 -= eleccion;
								printf("Este es tu consecutivo: \n3102024103");
								printf("Total: ");
								printf("%d", 2500 * eleccion);
								printf(" colones\n");
							}
							else {
								printf("Numero no valido, por favor, intentelo de nuevo\n");
							}
							break;
						case 2:
							for (int i = 0; i < 5; i++) {
								for (int j = 0; j < 5; j++) {
									printf("%c", 219);
									printf(" ");
								}
							}
							printf("Cuantas butacas deseas reservar?\n");
							scanf_s("%d", &eleccion);
							if (eleccion <= sala1) {
								printf("Se han reservado ");
								printf("%d", eleccion);
								printf(" butacas");
								sala1 -= eleccion;
								printf("Este es tu consecutivo: \n5102024931");
								printf("Total: ");
								printf("%d", 2300 * eleccion);
								printf(" colones\n");
							}
							else {
								printf("Numero no valido, por favor, intentelo de nuevo\n");
							}
							break;
						case 3:
							printf("Regresando al menu anterior\n\n\n\n\n\n\n\n");
							break;
						}
					} while (eleccion != 3 && !activo);
					break;
				case 2:
					sala1 = 25;
					sala2 = 20;
					sala3 = 30;
					do {
						printf("Por favor, escoge un horario: \n");
						printf("1. Intensamente 2\nSala dos\n3/10/2024: Inicia 2:30 pm--Termina 4:00 pm\n");
						printf("2. Intensamente 2\nSala uno\n3/10/2024: Inicia 6:30 pm--Termina 8:00 pm\n");
						printf("3. Para regresar al menu anterior\n");
						scanf_s("%d", &eleccion);
						switch (eleccion) {
						case 1:
							for (int i = 0; i < 5; i++) {
								for (int j = 0; j < 4; j++) {
									printf("%c", 219);
									printf(" ");
								}
							}
							printf("Cuantas butacas deseas reservar?\n");
							scanf_s("%d", &eleccion);
							if (eleccion <= sala2) {
								printf("Se han reservado ");
								printf("%d", eleccion);
								printf(" butacas");
								sala2 -= eleccion;
								printf("Este es tu consecutivo: \n3102024232");
								printf("Total: ");
								printf("%d", 2000 * eleccion);
								printf(" colones\n");
							}
							else {
								printf("Numero no valido, por favor, intentelo de nuevo\n");
							}
							break;
						case 2:
							for (int i = 0; i < 5; i++) {
								for (int j = 0; j < 5; j++) {
									printf("%c", 219);
									printf(" ");
								}
							}
							printf("Cuantas butacas deseas reservar?\n");
							scanf_s("%d", &eleccion);
							if (eleccion <= sala1) {
								printf("Se han reservado ");
								printf("%d", eleccion);
								printf(" butacas");
								sala1 -= eleccion;
								printf("Este es tu consecutivo: \n3102024631");
								printf("Total: ");
								printf("%d", 2000 * eleccion);
								printf(" colones\n");
							}
							else {
								printf("Numero no valido, por favor, intentelo de nuevo\n");
							}
							break;
						case 3:
							printf("Regresando al menu anterior\n\n\n\n\n\n\n\n");
							break;
						}
					} while (eleccion != 3 && !activo);
					break;
				case 3:
					sala1 = 25;
					sala2 = 20;
					sala3 = 30;
					do {
						printf("Por favor, escoge un horario: \n");
						printf("1. Oppenheimer\nSala tres\n5/10/2024: Inicia 6:30 pm--Termina 8:30 pm\n");
						printf("2. Oppenheimer\nSala tres\n7/10/2024: Inicia 4:00 pm--Termina 6:00 pm\n");
						printf("3. Para regresar al menu anterior");
						scanf_s("%d", &eleccion);
						switch (eleccion) {
						case 1:
							for (int i = 0; i < 6; i++) {
								for (int j = 0; j < 5; j++) {
									printf("%c", 219);
									printf(" ");
								}
							}
							printf("Cuantas butacas deseas reservar?\n");
							scanf_s("%d", &eleccion);
							if (eleccion <= sala3) {
								printf("Se han reservado ");
								printf("%d", eleccion);
								printf(" butacas");
								sala3 -= eleccion;
								printf("Este es tu consecutivo: \n5102024633");
								printf("Total: ");
								printf("%d", 2500 * eleccion);
								printf(" colones\n");
							}
							else {
								printf("Numero no valido, por favor, intentelo de nuevo\n");
							}
							break;
						case 2:
							for (int i = 0; i < 6; i++) {
								for (int j = 0; j < 5; j++) {
									printf("%c", 219);
									printf(" ");
								}
							}
							printf("Cuantas butacas deseas reservar?\n");
							scanf_s("%d", &eleccion);
							if (eleccion <= sala3) {
								printf("Se han reservado ");
								printf("%d", eleccion);
								printf(" butacas\n");
								sala3 -= eleccion;
								printf("Este es tu consecutivo: \n7102024403\n");
								printf("Total: ");
								printf("%d", 2500 * eleccion);
								printf(" colones\n");
							}
							else {
								printf("Numero no valido, por favor, intentelo de nuevo\n");
							}
							break;
						case 3:
							printf("Regresando al menu anterior\n\n\n\n");
							break;
						}
					} while (eleccion != 3 && !activo);
					break;
				case 4:
					printf("Regresando al menu anterior\n\n\n\n");
					break;
				}
			} while (eleccion != 4 && !activo);
			break;
		case 4:
			do {
				printf("Para comprar debes tener un consecutivo, por favor, ingresa el consecutivo:\n");
				printf("Si no deseas comprar, ingresa un 7 para regresar al menu anterior\n");
				scanf_s("%d", &eleccion);
				switch (eleccion) {
				case 1:
					printf("Bien, has reservado para ver Deadpool y Wolverine el 3 de octubre a las 10:00 pm en la sala tres\n");
					printf("Por favor, ingresa tu cedula y tu tarjeta para efectuar el pago\n");
					printf("Cedula: \n");
					scanf_s("%d", &cedula);
					printf("Tarjeta: \n");
					scanf_s("%d", &tarjeta);
					printf("Registro y pago efectuados con exito!\nDisfruta de la pelicula\n Nueva Cinema\n");
					break;
				case 2:
					printf("Bien, has reservado para ver Deadpool y Wolverine el 5 de octubre a las 9:30 pm en la sala uno\n");
					printf("Por favor, ingresa tu cedula y tu tarjeta para efectuar el pago\n");
					printf("Cedula: \n");
					scanf_s("%d", &cedula);
					printf("Tarjeta: \n");
					scanf_s("%d", &tarjeta);
					printf("Registro y pago efectuados con exito!\nDisfruta de la pelicula\n Nueva Cinema\n");
					break;
				case 3:
					printf("Bien, has reservado para ver Intensamente 2 el 3 de octubre a las 2:30 pm en la sala dos\n");
					printf("Por favor, ingresa tu cedula y tu tarjeta para efectuar el pago\n");
					printf("Cedula: \n");
					scanf_s("%d", &cedula);
					printf("Tarjeta: \n");
					scanf_s("%d", &tarjeta);
					printf("Registro y pago efectuados con exito!\nDisfruta de la pelicula\n Nueva Cinema\n");
					break;
				case 4:
					printf("Bien, has reservado para ver Intensamente 2 el 3 de octubre a las 6:30 pm en la sala uno\n");
					printf("Por favor, ingresa tu cedula y tu tarjeta para efectuar el pago\n");
					printf("Cedula: \n");
					scanf_s("%d", &cedula);
					printf("Tarjeta: \n");
					scanf_s("%d", &tarjeta);
					printf("Registro y pago efectuados con exito!\nDisfruta de la pelicula\n Nueva Cinema\n");
					break;
				case 5:
					printf("Bien, has reservado para ver Oppenheimer el 5 de octubre a las 6:30 pm en la sala tres\n");
					printf("Por favor, ingresa tu cedula y tu tarjeta para efectuar el pago\n");
					printf("Cedula: \n");
					scanf_s("%d", &cedula);
					printf("Tarjeta: \n");
					scanf_s("%d", &tarjeta);
					printf("Registro y pago efectuados con exito!\nDisfruta de la pelicula\n Nueva Cinema\n");
					break;
				case 6:
					printf("Bien, has reservado para ver Deadpool y Wolverine el 7 de octubre a las 4:00 pm en la sala tres\n");
					printf("Por favor, ingresa tu cedula y tu tarjeta para efectuar el pago\n");
					printf("Cedula: \n");
					scanf_s("%d", &cedula);
					printf("Tarjeta: \n");
					scanf_s("%d", &tarjeta);
					printf("Registro y pago efectuados con exito!\nDisfruta de la pelicula\n Nueva Cinema\n");
					break;
				case 7:
					printf("Regresando al menu anterior\n\n\n\n\n\n\n\n");
					break;
				default:
					printf("Numero de consecutivo inexistente, intentalo de nuevo\n");
					break;

				}


			} while (eleccion != 7 && !activo);
			break;

		default:
			printf("Opcion no valida, intentelo de nuevo");
			break;
		}
	}
	while (!activo);
	
	return 0;
}