/*
* 
* Pedir al usuario dos cadenas de caracteres de numeros
* Uno entero y otro real
* Convertirlos a sus respectivos valores y por ultimo sumarlos

*/
#include<iostream>
#include<stdlib.h>

using namespace std;


int main() {

	char usuario[25];
	char real[25];
	float numero;

	cout << "Digite dos cadenas una con un numero entero y otra con un numero real: ";
	cin.getline(usuario,25);
	cin.getline(real, 25);

	numero = atoi(usuario) + atof(real);

	cout << "la suma del entero y el real es: " << numero<<endl;

	system("pause");
	return 0;
}
