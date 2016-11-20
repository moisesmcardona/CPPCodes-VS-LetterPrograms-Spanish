#include <iostream>
using namespace std;
void getstring(char option);
void countvocals(char string[]);
void countconsonants(char string[]);
void countletters(char string[]);
void convertuppercase(char string[]);
void copystring(char string[]);
void appendstring(char string[]);

int main()
{
	//Muestra Menu de opciones hasta que g o G sean escritos para salir.
	char option = 'z';
	while (option != 'g' && option != 'G' && option != '7')
	{
		cout << "MENU\n\n" ;
		cout << "A. Contar el n" << (char)163 << "mero de vocales en un string." << endl;
		cout << "B. Contar el n" << (char)163 << "mero de consonantes en un string." << endl;
		cout << "C. Contar el n" << (char)163 << "mero de letras en un string." << endl;
		cout << "D. Convertir en may" << (char)163 << "scula todas las letras de un string." << endl;
		cout << "E. Copiar un string en otro string." << endl;
		cout << "F. Anexar un string al final de otro string." << endl;
		cout << "G. Fin." << endl;
		cin >> option; //guarda opcion deseada en la variable
		if (option != 'g' && option != 'G' && option != '7') // si la opcion no es g o G (salir), procede a pedir el string
			getstring(option);
	}
}

void getstring(char option)
{
	//se pide el string
	char String[255];
	cin.ignore();
	cout << "Entre un string: ";
	cin.getline(String, 255, '\n');
	//luego de pedir el string, pasa a lanzar la funcion deseada
	if (option == 'a' || option == 'A' || option == '1')
		countvocals(String);
	else if (option == 'b' || option == 'B' || option == '2')
		countconsonants(String);
	else if (option == 'c' || option == 'C' || option == '3')
		countletters(String);
	else if (option == 'd' || option == 'D' || option == '4')
		convertuppercase(String);
	else if (option == 'e' || option == 'E' || option == '5')
		copystring(String);
	else if (option == 'f' || option == 'F' || option == '6')
		appendstring(String);
}

void countvocals(char string[])
{
	//se cuentan las vocales dentro del string
	int counter = 0;
	int i = 0;
	while(string[i])
	{
		if (string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U')
			counter++;
		i++;
	}
	cout << "El string " << string << " tiene " << counter << " vocales." << endl << endl;
}

void countconsonants(char string[])
{
	//se cuentan las consonantes dentro del string
	int counter = 0;
	int i = 0;
	while (string[i])
	{
		if (string[i] != 'a' && string[i] != 'A' && string[i] != 'e' && string[i] != 'E' && string[i] != 'i' && string[i] != 'I' && string[i] != 'o' && string[i] != 'O' && string[i] != 'u' && string[i] != 'U' && string[i] != ' ')
			counter++;
		i++;
	}
	cout << "El string " << string << " tiene " << counter << " consonantes." << endl << endl;
}

void countletters(char string[])
{
	//se cuentan las letras del string
	int counter = 0;
	int i = 0;
	while (string[i])
	{
		if (string[i] != ' ')
			counter++;
		i++;
	}
	cout << "El string " << string << " tiene " << counter << " letras." << endl << endl;
}

void convertuppercase(char string[])
{
	//convierte la palabra en mayuscula
	int i = 0;
	while (string[i])
	{
		//si el codigo ASCII es igual o mayor a 97 (que es la letra a), le resta 32 valores para hacer las letras mayusculas
		if (string[i] >= 97)
			string[i] = string[i] - 32;
		i++;
	}
	cout << "El string en may"<< (char)163 << "scula es: " << string << endl << endl;
}

void copystring(char string[])
{
	//copia un string en otro string
	char secondstring[255];
	int i = 0;
	while (string[i] != '\0')
	{
		secondstring[i] = string[i];
		i++;
	}
	secondstring[i] = '\0';
	cout << "String original: " << string << endl ;
	cout << "String copiado: " << secondstring << endl << endl;
}

void appendstring(char string[])
{
	//anexa un string a otro string
	char secondstring[255];
	char unifiedstring[1024];
	cout << "Entre otro string: ";
	cin.getline(secondstring, 255, '\n');
	int i = 0, i2 = 0;
	int startreplace = 0;
	while (string[i])
	{
		unifiedstring[i] = string[i];
		i++;
	}
	unifiedstring[i] = ' ';
	while (secondstring[i2])
	{
		unifiedstring[i + i2 + 1] = secondstring[i2];
		i2++;
	}
	unifiedstring[i + i2 + 1] = '\0';
	cout << "String anexado: " << unifiedstring << endl << endl;
}
/* SALIDA
MENU

A. Contar el número de vocales en un string.
B. Contar el número de consonantes en un string.
C. Contar el número de letras en un string.
D. Convertir en mayúscula todas las letras de un string.
E. Copiar un string en otro string.
F. Anexar un string al final de otro string.
G. Fin.
a
Entre un string: Ingenieria
El string Ingenieria tiene 6 vocales.

MENU

A. Contar el número de vocales en un string.
B. Contar el número de consonantes en un string.
C. Contar el número de letras en un string.
D. Convertir en mayúscula todas las letras de un string.
E. Copiar un string en otro string.
F. Anexar un string al final de otro string.
G. Fin.
b
Entre un string: Ingenieria
El string Ingenieria tiene 4 consonantes.

MENU

A. Contar el número de vocales en un string.
B. Contar el número de consonantes en un string.
C. Contar el número de letras en un string.
D. Convertir en mayúscula todas las letras de un string.
E. Copiar un string en otro string.
F. Anexar un string al final de otro string.
G. Fin.
c
Entre un string: Ingenieria
El string Ingenieria tiene 10 letras.

MENU

A. Contar el número de vocales en un string.
B. Contar el número de consonantes en un string.
C. Contar el número de letras en un string.
D. Convertir en mayúscula todas las letras de un string.
E. Copiar un string en otro string.
F. Anexar un string al final de otro string.
G. Fin.
d
Entre un string: Ingenieria
El string en mayúscula es: INGENIERIA

MENU

A. Contar el número de vocales en un string.
B. Contar el número de consonantes en un string.
C. Contar el número de letras en un string.
D. Convertir en mayúscula todas las letras de un string.
E. Copiar un string en otro string.
F. Anexar un string al final de otro string.
G. Fin.
e
Entre un string: Ingenieria
String original: Ingenieria
String copiado: Ingenieria

MENU

A. Contar el número de vocales en un string.
B. Contar el número de consonantes en un string.
C. Contar el número de letras en un string.
D. Convertir en mayúscula todas las letras de un string.
E. Copiar un string en otro string.
F. Anexar un string al final de otro string.
G. Fin.
f
Entre un string: Ingenieria
Entre otro string: Electrica
String anexado: Ingenieria Electrica

MENU

A. Contar el número de vocales en un string.
B. Contar el número de consonantes en un string.
C. Contar el número de letras en un string.
D. Convertir en mayúscula todas las letras de un string.
E. Copiar un string en otro string.
F. Anexar un string al final de otro string.
G. Fin.
g
Press any key to continue . . .
*/


