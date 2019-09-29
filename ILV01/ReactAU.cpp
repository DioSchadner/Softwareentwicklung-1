// ReactAU.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"


void main()
{
	int breite, länge, umfang, fläche;

	printf("Geben Sie die Breite und Laenge eines Rechtecks ein:\n");
	if (scanf_s("%d %d", &breite, &länge)) {

		fflush(stdin);	

		umfang = 2 * (breite + länge);										// kleine Validierung -> Eingabe von Zeichen nicht mehr möglich
		fläche = breite * länge;											// Eingabe von neg. Zahlen sehr wohl noch möglich!

		printf("Umfang des Rechtecks: %d\n", umfang);
		printf("Flaeche des Rechtecks: %d\n", fläche);
	}
	else {
		printf("Ungueltige Eingabe!\n");
	}
	_getch();
}
