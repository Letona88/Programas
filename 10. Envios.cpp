#include<iostream>
using namespace std;
int main() {
	float kilometros;
	float libras;
	int opcion;
	float preciokilometro;
	float preciolibra;
	float totalambos;
	float totaldocumento;
	float totalpaquete;
	cout << "Desea enviar un Paquete, Documento o Ambos?" << endl;
	cout << "1. Paquete" << endl;
	cout << "2. Documento" << endl;
	cout << "3. Ambos" << endl;
	cout << "4. Salir" << endl;
	cin >> opcion;
	switch (opcion) {
	case 1:
		cout << "Cada libra tiene un costo de Q3.20" << endl;
		cout << "Ingrese cuantas libras pesa su paquete" << endl;
		cin >> libras;
		preciolibra = 3.20;
		totalpaquete = libras*preciolibra;
		cout << "Su total a cancelar es de:  " << totalpaquete << endl;
		break;
	case 2:
		cout << "Cada Kilometro Recorrido tiene un costo de Q0.45" << endl;
		cout << "Ingrese cuantos Kilometros recorrera su documento" << endl;
		cin >> kilometros;
		preciokilometro = 0.45;
		totaldocumento = kilometros*preciokilometro;
		cout << "Su total a cancelar es de:  " << totaldocumento << endl;
		break;
	case 3:
		cout << "Cada libra tiene un costo de Q3.20" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "Ingrese cuantas libras pesa su paquete" << endl;
		cin >> libras;
		preciolibra = 3.20;
		totalpaquete = libras*preciolibra;
		cout << "Su total a cancelar del paquete es de:  " << totalpaquete << endl;
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		cout << "Cada Kilometro Recorrido tiene un costo de Q0.45" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "Ingrese cuantos Kilometros recorrera su documento" << endl;
		cin >> kilometros;
		preciokilometro = 0.45;
		totaldocumento = kilometros*preciokilometro;
		cout << "Su total a cancelar del envio de documento es de:  " << totaldocumento << endl;
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		totalambos = totaldocumento+totalpaquete;
		cout << "su total por envio de ambos productos es de:  " << totalambos << endl;
		break;
	case 4:
		cout << "saliendo" << endl;
		break;
	default:
		cout << "ingrese un numero valido" << endl;
	}
	return 0;
}

