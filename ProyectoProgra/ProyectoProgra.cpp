#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int eleccion = 0;
	printf("Hola! Bienvenido a Nueva Cinema! En que podemos ayudarte?\n");
	printf("a. Para ver el archvo\nb. Para acceder a mantenimiento\nc. Para reservar\nd. Para comprar\n");
	scanf_s("%d", &eleccion);
	printf("has escogido la opcion: ");
	printf("%d", eleccion);


	return 0;
}

