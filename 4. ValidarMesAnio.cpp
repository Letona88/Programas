#include<iostream>
using namespace std;
int main() {
	float anio;
	string mes;
	cout << "Ingrese mes en mayuscula: " << endl;
	cin >> mes;

	if (mes!="JUNIO" && mes!="JULIO" && mes!="AGOSTO") {
		cout << "Mes incorrecto" << endl;
	}
	
	if (mes=="JUNIO") {
		cout << "Mes anterior" << endl;
	}

	if (mes=="JULIO") {
		cout << "Mes actual" << endl;
	}

	if (mes=="AGOSTO") {
		cout << "Mes siguiente" << endl;
	}
	cout << "Ingrese anio en numero: " << endl;
	cin >> anio;
	if (anio==2018) {
		cout << "Anio anterior" << endl;
	} else {
		if (anio==2019) {
			cout << "Anio actual" << endl;
		} else {
			if (anio==2020) {
				cout << "Anio siguiente" << endl;
			} else {
				cout << "Anio incorrecto" << endl;
			}
		}
	}
	return 0;
}

