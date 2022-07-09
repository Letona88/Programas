#include<iostream>
using namespace std;
#define SIN_TIPO string

int main() {
	float agua250;
	float agua300;
	float cantidadhora;
	float costoproduccion;
	float galletas;
	float kiloazucar;
	float kilomaiz;
	int opcionembotellado;
	float paqueteazucar;
	SIN_TIPO paquetefrijol;
	float paquetefrijoll;
	float paquetegalleta;
	float paquetemaiz;
	float pesoazucar;
	float pesofrijol;
	float pesomaiz;
	float preciogalleta;
	int seleccion;
	int seleccionempacado;
	float tiempo;
	float tiempoagua;
	int tipobotella;
	int tipodegrano;
	float unidad250;
	float unidad300;
	do {
		system ("cls");
		cout << "Menu principal" << endl;
		cout << "1<----Empacado" << endl;
		cout << "2<----Embotellado" << endl;
		cout << "3<----Consulta de informacion" << endl;
		cout << "4<----Salir" << endl;
		cin >> seleccion;
		switch (seleccion) {
		case 1:
			system ("cls");
			cout << "Opciones de Empacado" << endl;
			cout << "1<---Galletas" << endl;
			cout << "2<---Granos básicos" << endl;
			cout << "3<---Menú principal" << endl;
			cout << "4<---Salir" << endl;
			cin >> seleccionempacado;
			switch (seleccionempacado) {
			case 1:
				system ("cls");
				cout << "****GALLETAS****" << endl;
				cout << "¿Cuantas galletas desea?" << endl;
				cin >> galletas;
				do {
					cout << "Cual es el precio de las galletas?" << endl;
					cin >> preciogalleta;
					if (preciogalleta>12.50) {
						cout << "El costo no debe ser mayor a Q12.50" << endl;
					}
				} while (preciogalleta>=12.51);
				do {
					cout << "Cuantos paquetes se realizan por hora?" << endl;
					cin >> paquetegalleta;
					if (paquetegalleta>600) {
						cout << "La cantidad maxima de paquetes es de 600" << endl;
					}
				} while (paquetegalleta>=601);
				cantidadhora = (galletas/paquetegalleta);
				costoproduccion = (preciogalleta*galletas);
				cout << "Resultados" << endl;
				cout << "Cantidad de horas: " << cantidadhora << endl;
				cout << "Costo de Produccion: " << costoproduccion << endl;
				system ("pause");
				break;
			case 2:
				system ("cls");
				cout << "****GRANOS BASICOS****" << endl;
				cout << "1<--Azucar" << endl;
				cout << "2<--Maiz" << endl;
				cout << "3<--Frijol" << endl;
				cin >> tipodegrano;
				switch (tipodegrano) {
				case 1:
					system ("cls");
					cout << "Ingrese peso en kilogramos" << endl;
					cin >> pesoazucar;
					kiloazucar = (pesoazucar*1000);
					paqueteazucar = (kiloazucar/400);
					cout << "Cantidad de unidades empacadas: " << paqueteazucar << endl;
					cout << "Cada paquete contiene 400 gramos de azucar" << endl;
					system ("pause");
					break;
				case 2:
					system ("cls");
					cout << "Ingrese peso en kilogramo" << endl;
					cin >> pesomaiz;
					kilomaiz = (pesomaiz*1000);
					paquetemaiz = (kilomaiz/250);
					cout << "Cantidad de unidades empacadas: " << paquetemaiz << endl;
					cout << "Cada paquete contiene 250 gramos" << endl;
					system ("pause");
					break;
				case 3:
					system ("cls");
					cout << "Ingrese peso en gramos (no menor a 100)" << endl;
					cin >> pesofrijol;
					paquetefrijoll = (pesofrijol/100);
					cout << "Cantidad de unidades empacadas: " << paquetefrijol << endl;
					cout << "cada paquete tiene 100 gramos " << endl;
					system ("pause");
					break;
				}
				break;
			}
			break;
		case 2:
			system ("cls");
			cout << "Opciones de Embotellado" << endl;
			cout << "1<---Agua" << endl;
			cout << "2<--Menu principal" << endl;
			cout << "3<--Salir" << endl;
			cin >> opcionembotellado;
			switch (opcionembotellado) {
			case 1:
				system ("cls");
				cout << "****AGUA****" << endl;
				do {
					cout << "Tiempo que tardara en produccion? (horas)" << endl;
					cin >> tiempoagua;
					if (tiempoagua!=8 || tiempoagua!=16 || tiempoagua!=24 || tiempoagua!=32 || tiempo!=40) {
						cout << "El total de horas debe ser multiplos de 8, desde 8 horas hasta 40 horas" << endl;
					}
				} while (!(tiempoagua==8 || tiempoagua==16 || tiempoagua==24 || tiempoagua==32 || tiempoagua==40));
				cout << "Que tipo de botella se utilizara?" << endl;
				cout << "1<--- Botella de 300 mL." << endl;
				cout << "2<--- Botella de 650 mL" << endl;
				cin >> tipobotella;
				switch (tipobotella) {
				case 1:
					system ("cls");
					unidad300 = (tiempoagua*250);
					agua300 = (unidad300*300);
					cout << "Cantidad de unidades: " << unidad300 << endl;
					cout << "Cantidad de agua embotellada: " << agua300 << "mL" << endl;
					system ("pause");
					break;
				case 2:
					system ("cls");
					unidad250 = (tiempoagua*650);
					agua250 = (unidad250*175);
					cout << "Cantidad de unidades: " << unidad250 << endl;
					cout << "Cantidad de agua embotellada: " << agua250 << "mL" << endl;
					system ("pause");
					break;
				}
				break;
			}
			break;
		case 3:
			system ("cls");
			cout << "****INFORMACION****" << endl;
			cout << "Galletas" << endl;
			cout << "Cantidad de horas: " << cantidadhora << endl;
			cout << "Costo de Produccion: " << costoproduccion << endl;
			cout << " " << endl;
			cout << "AZUCAR" << endl;
			cout << "Cantidad de unidades empacadas: " << paqueteazucar << endl;
			cout << " " << endl;
			cout << "MAÍZ" << endl;
			cout << "Cantidad de unidades empacadas: " << paquetemaiz << endl;
			cout << " " << endl;
			cout << "FRIJOL" << endl;
			cout << "Cantidad de unidades empacadas: " << paquetefrijol << endl;
			cout << " " << endl;
			cout << "BOTELLA DE 300 mL" << endl;
			cout << "Cantidad de unidades: " << unidad300 << endl;
			cout << "Cantidad de agua embotellada :" << agua300 << "mL" << endl;
			cout << " " << endl;
			cout << "BOTELLA DE 650 mL" << endl;
			cout << "Cantidad de unidades: " << unidad250 << endl;
			cout << "Cantidad de agua embotellada: " << agua250 << "mL" << endl;
			system ("pause");
			break;
		}
	} while (!(seleccion==4 || seleccionempacado==4 || opcionembotellado==3));
	return 0;
}

