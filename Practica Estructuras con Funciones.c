#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nombre[10];
	char apellidoPa[10];
	char apellidoMa[10];
}Nombre;

typedef struct{
	char calle[10];
	int numero;
	char colonia[10];
	int CP;
}Direccion;

typedef struct{
	char descripcion[10];
	int tel;
}Telefono;

typedef struct{
	char mail[20];
}Email;

typedef struct{
	Nombre nombres;
	Direccion direcciones;
	Telefono telefonos;
	Email correo;
}Clientes;

typedef struct{
	int
}Vestidos;

int main(){

	int opc, max=0;

	do{
		printf("\n\tSISTEMA TIENDA VESTIDOS\n");
		printf("\n¡Bienvenido!\n");

		printf("\nMenú Principal: \n");
		printf("\n\t1.- Clientes & Compras \n\t2.- Vestido Pendientes por Entrega \n\t3.- Stock en Almacén \n\t4.- Agenda de Citas \n\t5.- Reporte de Ganancias \n\t6.- Salir del Sistema \n");
		printf("\n\n\tIngresa la Opción: \t");
		scanf("%d", &opc);

		switch(opc){

		case 1:
			printf("\n\"Clientes & Compras\"\n");
			printf("\n\t1.- Busqueda de Cliente, \n\t2.- Busqueda de Vestido Comprados \n\t3.- Base General de Clientes & Compras");
			printf("\n\n\tIngresa la Opción: \t");
			scanf("%d",&opc);

			switch(opc){

			case 1:
				printf("\n\"Clientes & Compras > Busqueda de Clientes\"\n");

				break;

			case 2:

				printf("\n\"Clientes & Compras > Busqueda de Vestidos Comprados\"\n");

				break;

			case 3:

				printf("\n\"Clientes & Compras > Base General de Clientes & Compras\"\n");

				 break;
			}

		break;

		case 2:
			printf("\n\"Vestido Pendientes por Entrega\"\n");
			printf("\n\t1.- Busqueda de Cliente, \n\t2.- Busqueda de Vestido Comprado \n\t3.- Base General de Clientes & Compras");
			printf("\n\n\tIngresa la Opción: \t");
			scanf("%d",&opc);


			break;

		case 3:

			break;

		case 4:

			break;

		case 5:

			break;


		case 6:

			printf("\n\n\t ¡Saliste del Sistema! Nos vemos Pronto.");
			exit(0);

			break;
		}


	}while(opc=0);


	return 0;
}
