/*Uebung2
	Name. DJouko Suzie
	Datum. 18.10.2023
	Beschreibung:
	Aufgabe1 ignoriet die Leerzeichnen bei den Eingaben
	Aufgabe2 ersetz kleine Vokale durch groﬂbuchstaben*/


#include<stdio.h> 

	//enum Ziffer { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main() {
	char Eingabe;
	int Summe = 0;
	int Var = 0;

	//   enum Ziffer ziffer ;
	printf("Bitte geben Sie eine Eingabe ein: \n");

	do {
		Eingabe = getchar(); // Zeichen eingeben

		Var = Eingabe - '0';
		if ((Var >= 0) && (Var <= 9)) {
			Summe = Summe + Var;
		}

		if (Eingabe == ' ') {
			continue; // Leerzeiele ignorieren 
		}

		switch (Eingabe) {

		case ('a'):
			Eingabe = 'A';
			break;

		case ('e'):
			Eingabe = 'E';
			break;

		case ('i'):
			Eingabe = 'I';
			break;

		case ('o'):
			Eingabe = 'O';
			break;

		case ('u'):
			Eingabe = 'U';
			break;


		default:
			break;

		}
		putchar(Eingabe); // Zeichen ausgeben 


	} while (Eingabe != EOF);

	printf("Die Quersumme ist %i \n", Summe);

	return 0;
}