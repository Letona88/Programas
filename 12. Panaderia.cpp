#include<iostream>
using namespace std;

int menu();
void funciontorta();
void funcionfrances();

int menu() {
	int seleccion;
	do {
		system("cls");
		cout << "RECETAS LA MEJOR" << endl;
		cout << "1. Torta" << endl;
		cout << "2. Frances" << endl;
		cout << "3. Salir" << endl;
		cout << "Seleccione una opcion: " << endl;
		cin >> seleccion;
		if ((seleccion<1 || seleccion>3)) {
			cout << "Digite una opcion correcta" << endl;
			system("Pause"); 
		}
	} while (!(seleccion==1 || seleccion==2 || seleccion==3));
	return seleccion;
}

void funciontorta() {
	int cantidadtortas;
	int tamanotorta;
	cout << endl; 
	do {
		system("cls");
		cout << "Menu de Torta" << endl;
		cout << "1. Pequeña Q.10.00" << endl;
		cout << "2. Mediana Q.25.00" << endl;
		cout << "3. Grande Q.40.00" << endl;
		cout << "4. Regresar menu anterior" << endl;
		cout << "Seleccione el tamano de la torta: " << endl;
		cin >> tamanotorta;
		switch (tamanotorta) {
		case 1:
			cout << "Ingrese unidades del pedido: " << endl;
			cin >> cantidadtortas;
			cout << "Su total es: Q. " << cantidadtortas*10 << endl;
			system("Pause");
			break;
		case 2:
			cout << "Ingrese unidades del pedido: " << endl;
			cin >> cantidadtortas;
			cout << "Su total es: Q. " << cantidadtortas*25 << endl;
			system("Pause");
			break;
		case 3:
			cout << "Ingrese unidades del pedido: " << endl;
			cin >> cantidadtortas;
			cout << "Su total es: Q. " << cantidadtortas*40 << endl;
			system("Pause");
			break;
		case 4:
			cout << "Regresando a menu principal" << endl;
			break;
		default:
			cout << "Seleccione una opcion correcta" << endl;
			system("Pause");
		}
	} while (tamanotorta!=4);
}

void funcionfrances() {
	int cantidadfrances;
	int tamanofrances;

	do {
		system("cls");
		cout << "Menu de frances" << endl;
		cout << "1. Pequeño Q.2.00" << endl;
		cout << "2. Mediano Q.5.00" << endl;
		cout << "3. Grande Q.10.00" << endl;
		cout << "4. Regresar menu anterior" << endl;
		cout << "Seleccione el tamano de su frances: " << endl;
		cin >> tamanofrances;
		switch (tamanofrances) {
		case 1:
			cout << "Ingrese unidades del pedido: " << endl;
			cin >> cantidadfrances;
			cout << "Su total es: Q. " << cantidadfrances*2 << endl;
			system("Pause");
			break;
		case 2:
			cout << "Ingrese unidades del pedido: " << endl;
			cin >> cantidadfrances;
			cout << "Su total es: Q. " << cantidadfrances*5 << endl;
			system("Pause");
			break;
		case 3:
			cout << "Ingrese unidades del pedido: " << endl;
			cin >> cantidadfrances;
			cout << "Su total es: Q. " << cantidadfrances*10 << endl;
			system("Pause"); 
			break;
		case 4:
			cout << "Regresando a menu principal" << endl;
			break;
		default:
			cout << "Seleccione una opcion correcta" << endl;
			system("Pause");
		}
	} while (tamanofrances!=4);
}

int main() {
	int seleccionmenu;
	do {
		seleccionmenu = menu();
		switch (seleccionmenu) {
		case 1:
			funciontorta();
			break;
		case 2:
			funcionfrances();
			break;
		case 3:
			cout << "Gracias por visitarnos" << endl;
			break;
		}
	} while (seleccionmenu!=3);
	return 0;
}

