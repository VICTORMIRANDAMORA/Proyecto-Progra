#include <iostream>
#include <stdio.h>
#include "Movie.h"
#include "Room.h"
#include "Schedule.h"

using namespace std;

int main() {
	int eleccion = 0, contrasena = 0, cedula = 0, tarjeta = 0;
	bool active = false;
	Movie Deadpool (2024, 127, "Estados Unidos", "Deadpool viaja en el tiempo con la intención de reclutar a Wolverine en la batalla contra un enemigo comun: Paradox");
	Movie Intensamente (2024, 96, "Estados Unidos", "Ahora que es adolescente, Riley experimenta nuevos sentimientos como Ansiedad y Envidia, que se imponen a los viejos mientras ella duda sobre si abandonar a sus antiguas amigas por otras de la escuela secundaria.");
	Movie Oppenheimer (2023, 180, "Estados Unidos", "Durante la Segunda Guerra Mundial, el teniente general Leslie Groves designa al fisico J. Robert Oppenheimer para un grupo de trabajo que esta desarrollando el Proyecto Manhattan, cuyo objetivo consiste en fabricar la primera bomba atomica.");
	Room Sala1 (5, 5, 2300);
	Room Sala2 (5, 4, 2000);
	Room Sala3 (6, 5, 2500);
	Schedule Lunes1("Intensamente", "Lunes", "2:00 pm", "3:36 pm");
	Schedule Lunes2("Deadpool", "Lunes", "10:00 pm", "12:07 pm");
	Schedule Miercoles1("Oppenheimer", "Miercoles", "3:00 pm", "6:00 pm");
	Schedule Miercoles2("Intensamente", "Miercoles", "6:30", "8:06 pm");
	Schedule Viernes1("Oppenheimer", "Viernes", "4:00 pm", "7:00 pm");
	Schedule Viernes2("Deadpool", "Viernes", "7:30 pm", "9:37 pm");
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
					printf("\n\n\nLicitacion Nueva Cinema SA\n\n\nProducto desarrollado por: \nVictor Miranda\n\n\nLos derechos de uso de las peliculas estan en una fase dudosa\n");
					printf("pero estaran disponibles dentro de: ''hasta nuevo aviso''\n");
					break;
				case 2:
					printf("Saliendo del programa");
					active = true;
					break;
				case 3:
					printf("Regresando al menu principal\n\n\n\n");
					break;
				default:
					printf("Opcion no valida, intente de nuevo");
					break;
				}
			} while (eleccion != 3 && !active);
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
						do {
							printf("1.Deadpool\n2.Intensamente\n3.Oppenheimer\n5.Regresar al menu anterior\n\nQue pelicula desea revisar?\n");
							scanf_s("%d", &eleccion);
							switch (eleccion) {
							case 1:
								printf("Que desea hacer con Deadpool?\n1.Ver anho\n2.Ver duracion\n3.Ver pais\n4.Ver resena\n");
								scanf_s("%d", &eleccion);
								switch (eleccion) {
								case 1:
									printf("%d",Deadpool.getYear());
									printf("\n");
									break;
								case 2:
									printf("%d",Deadpool.getLength());
									printf(" min");
									printf("\n");
									break;
								case 3:
									printf("%s",Deadpool.getCountry().c_str());
									printf("\n");
									break;
								case 4:
									printf("%s",Deadpool.getReview().c_str());
									printf("\n");
									break;
								default:
									printf("Numero invalido, intente de nuevo\n");
								}
								break;
							case 2:
								printf("Que desea hacer con Intensamente?\n1.Ver anho\n2.Ver duracion\n3.Ver pais\n4.Ver resena\n");
								scanf_s("%d", &eleccion);
								switch (eleccion) {
								case 1:
									printf("%d", Intensamente.getYear());
									printf("\n");
									break;
								case 2:
									printf("%d", Intensamente.getLength());
									printf(" min");
									printf("\n");
									break;
								case 3:
									printf("%s", Intensamente.getCountry().c_str());
									printf("\n");
									break;
								case 4:
									printf("%s", Intensamente.getReview().c_str());
									printf("\n");
									break;
								default:
									printf("Numero invalido, intente de nuevo\n");
								}
								break;
							case 3:
								printf("Que desea hacer con Oppenheimer?\n1.Ver anho\n2.Ver duracion\n3.Ver pais\n4.Ver resena\n");
								scanf_s("%d", &eleccion);
								switch (eleccion) {
								case 1:
									printf("%d", Oppenheimer.getYear());
									printf("\n");
									break;
								case 2:
									printf("%d", Oppenheimer.getLength());
									printf(" min");
									printf("\n");
									break;
								case 3:
									printf("%s", Oppenheimer.getCountry().c_str());
									printf("\n");
									break;
								case 4:
									printf("%s", Oppenheimer.getReview().c_str());
									printf("\n");
									break;
								default:
									printf("Numero invalido, intente de nuevo\n");
								}
								break;
							case 5:
								printf("Regresando al menu principal\n\n\n\n\n\n\n\n");
								break;
							}
						} while (eleccion != 5 && !active);
						break;
					case 2:
						do {
							printf("1. Sala uno\n2. Sala dos\n3. Sala tres\n4. Regresar al menu anterior\n");
							scanf_s("%d", &eleccion);
							switch (eleccion) {
							case 1:
								printf("Sala 1. Butacas y precio por persona\n");
								printf("%d", Sala1.getSeats());
								printf("-");
								printf("%d", Sala1.getPrice());
								printf("\n");
								break;
							case 2:
								printf("Sala 2. Butacas y precio por persona\n");
								printf("%d", Sala2.getSeats());
								printf("-");
								printf("%d", Sala2.getPrice());
								printf("\n");
								break;
							case 3:
								printf("Sala 3. Butacas y precio por persona\n");
								printf("%d", Sala3.getSeats());
								printf("-");
								printf("%d", Sala3.getPrice());
								printf("\n");
								break;
							case 4:
								printf("Regresando al menu anterior\n\n\n\n\n\n\n\n");
								break;
							default:
								printf("Opcion invalida, intentelo de nuevo\n");
							}

						} while (eleccion != 4 && !active);
						break;
					case 3:
						printf("Lunes\n");
						printf("%s", Lunes1.getName().c_str());
						printf("\nEmpieza %s", Lunes1.getStart().c_str());
						printf("\nTermina %s", Lunes1.getFinish().c_str());
						printf("\n\n");
						printf("%s", Lunes2.getName().c_str());
						printf("\nEmpieza %s", Lunes2.getStart().c_str());
						printf("\nTermina %s", Lunes2.getFinish().c_str());
						printf("\n\nMiercoles\n");
						printf("%s", Miercoles1.getName().c_str());
						printf("\nEmpieza %s", Miercoles1.getStart().c_str());
						printf("\nTermina %s", Miercoles1.getFinish().c_str());
						printf("\n\n");
						printf("%s", Miercoles2.getName().c_str());
						printf("\nEmpieza %s", Miercoles2.getStart().c_str());
						printf("\nTermina %s", Miercoles2.getFinish().c_str());
						printf("\n\nViernes\n");
						printf("%s", Viernes1.getName().c_str());
						printf("\nEmpieza %s", Viernes1.getStart().c_str());
						printf("\nTermina %s", Viernes1.getFinish().c_str());
						printf("\n\n");
						printf("%s", Viernes2.getName().c_str());
						printf("\nEmpieza %s", Viernes2.getStart().c_str());
						printf("\nTermina %s", Viernes2.getFinish().c_str());
						break;
					case 4:
						printf("Regresando al menu anterior\n\n\n\n\n\n\n\n");
						break;
					}
				} while (eleccion != 4 && !active);
			}
			break;
		case 3:
			do {
				printf("Escoje la pelicula que desees reservar\n");
				printf("1. Deadpool\n2. Intensamente\n3. Oppenheimer\n4. Regresar al menu anterior\n");
				scanf_s("%d", &eleccion);
				switch (eleccion) {
				case 1:
					do {
						printf("Escoge un horario: \n");
						printf("1. Deadpool\nSala uno\n Lunes: Inicia 10:00 pm--Termina 12:07 pm\n\n");
						printf("2. Deadpool\nSala dos\n5/Viernes: Inicia 7:30 pm--Termina 9:37 pm\n\n");
						printf("3. Para regresar al menu anterior\n");
						scanf_s("%d", &eleccion);
						switch (eleccion) {
						case 1:
							Sala1.ShowSeats();
							Sala1.FillSeats();
							printf("Tu consecutivo es: 111012\n");
							break;
						case 2:
							Sala2.ShowSeats();
							Sala2.FillSeats();
							printf("Tu consecutivo es: 520709\n");
							break;
						case 3:
							printf("Regresando al menu anterior\n\n\n\n\n\n\n\n");
							break;
						}
					} while (eleccion != 3 && !active);
					break;
				case 2:
					do {
						printf("Por favor, escoge un horario: \n");
						printf("1. Intensamente\nSala dos\nLunes: Inicia 2:00 pm--Termina 3:36 pm\n");
						printf("2. Intensamente\nSala uno\nMiercoles: Inicia 6:30 pm--Termina 8:06 pm\n");
						printf("3. Para regresar al menu anterior\n");
						scanf_s("%d", &eleccion);
						switch (eleccion) {
						case 1:
							Sala2.ShowSeats();
							Sala2.FillSeats();
							printf("Tu consecutivo es: 120203\n");
							break;
						case 2:
							Sala1.ShowSeats();
							Sala1.FillSeats();
							printf("Tu consecutivo es: 310608\n");;
							break;
						case 3:
							printf("Regresando al menu anterior\n\n\n\n\n\n\n\n");
							break;
						}
					} while (eleccion != 3 && !active);
					break;
				case 3:
					do {
						printf("Por favor, escoge un horario: \n");
						printf("1. Oppenheimer\nSala tres\nMiercoles: Inicia 3:00 pm--Termina 6:00 pm\n");
						printf("2. Oppenheimer\nSala uno\nViernes: Inicia 4:00 pm--Termina 7:00 pm\n");
						printf("3. Para regresar al menu anterior");
						scanf_s("%d", &eleccion);
						switch (eleccion) {
						case 1:
							Sala3.ShowSeats();
							Sala3.FillSeats();
							printf("Tu consecutivo es: 330306\n");
							break;
						case 2:
							Sala1.ShowSeats();
							Sala1.FillSeats();
							printf("Tu consecutivo es: 510407\n");
							break;
						case 3:
							printf("Regresando al menu anterior\n\n\n\n");
							break;
						}
					} while (eleccion != 3 && !active);
					break;
				case 4:
					printf("Regresando al menu anterior\n\n\n\n");
					break;
				}
			} while (eleccion != 4 && !active);
			break;
		case 4:
			do {
				printf("Para comprar debes tener un consecutivo, por favor, ingresa el consecutivo:\n");
				printf("Si no deseas comprar, ingresa un 7 para regresar al menu anterior\n");
				scanf_s("%d", &eleccion);
				switch (eleccion) {
				case 1110122:
					printf("Bien, has reservado para ver Deadpool el Lunes a las 10:00 pm en la sala 1\n");
					printf("Por favor, ingresa tu cedula y tu tarjeta para efectuar el pago\n");
					printf("El pago total seria de: %d", Sala1.getTotalPrice());
					printf("\nCedula: \n");
					scanf_s("%d", &cedula);
					printf("Tarjeta: \n");
					scanf_s("%d", &tarjeta);
					printf("Registro y pago efectuados con exito!\nDisfruta de la pelicula\nNueva Cinema\n");
					break;
				case 520709:
					printf("Bien, has reservado para ver Deadpool el Viernes a las 7:30 pm en la sala 2\n");
					printf("Por favor, ingresa tu cedula y tu tarjeta para efectuar el pago\n");
					printf("El pago total seria de: %d", Sala2.getTotalPrice());
					printf("\nCedula: \n");
					scanf_s("%d", &cedula);
					printf("Tarjeta: \n");
					scanf_s("%d", &tarjeta);
					printf("Registro y pago efectuados con exito!\nDisfruta de la pelicula\nNueva Cinema\n");
					break;
				case 120203:
					printf("Bien, has reservado para ver Intensamente el Lunes a las 2:00 pm en la sala 2\n");
					printf("Por favor, ingresa tu cedula y tu tarjeta para efectuar el pago\n");
					printf("El pago total seria de: %d", Sala2.getTotalPrice());
					printf("\nCedula: \n");
					scanf_s("%d", &cedula);
					printf("Tarjeta: \n");
					scanf_s("%d", &tarjeta);
					printf("Registro y pago efectuados con exito!\nDisfruta de la pelicula\nNueva Cinema\n");
					break;
				case 310608:
					printf("Bien, has reservado para ver Intensamente el Miercoles a las 6:30 pm en la sala 1\n");
					printf("Por favor, ingresa tu cedula y tu tarjeta para efectuar el pago\n");
					printf("El pago total seria de: %d", Sala1.getTotalPrice());
					printf("\nCedula: \n");
					scanf_s("%d", &cedula);
					printf("Tarjeta: \n");
					scanf_s("%d", &tarjeta);
					printf("Registro y pago efectuados con exito!\nDisfruta de la pelicula\nNueva Cinema\n");
					break;
				case 330306:
					printf("Bien, has reservado para ver Oppenheimer el Miercoles a las 3:00 pm en la sala 3\n");
					printf("Por favor, ingresa tu cedula y tu tarjeta para efectuar el pago\n");
					printf("El pago total seria de: %d", Sala3.getTotalPrice());
					printf("\nCedula: \n");
					scanf_s("%d", &cedula);
					printf("Tarjeta: \n");
					scanf_s("%d", &tarjeta);
					printf("Registro y pago efectuados con exito!\nDisfruta de la pelicula\nNueva Cinema\n");
					break;
				case 510407:
					printf("Bien, has reservado para ver Oppenheimer el Viernes a las 4:00 pm en la sala 1\n");
					printf("Por favor, ingresa tu cedula y tu tarjeta para efectuar el pago\n");
					printf("El pago total seria de: %d", Sala1.getTotalPrice());
					printf("\nCedula: \n");
					scanf_s("%d", &cedula);
					printf("Tarjeta: \n");
					scanf_s("%d", &tarjeta);
					printf("Registro y pago efectuados con exito!\nDisfruta de la pelicula\nNueva Cinema\n");
					break;
				case 7:
					printf("Regresando al menu anterior\n\n\n\n\n\n\n\n");
					break;
				default:
					printf("Numero de consecutivo inexistente, intentalo de nuevo\n");
					break;

				}


			} while (eleccion != 7 && !active);
			break;

		default:
			printf("Opcion no valida, intentelo de nuevo");
			break;
		}
	}
	while (!active);
	
	return 0;
}