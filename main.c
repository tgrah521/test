/*
 * main.c
 *
 *Aufgabe : Oberfläche und Volumen berechnen
 *
 *  Created on: 24.03.2021
 *      Author: swt
 */
#include <stdio.h>

#define PI 3.141      /* textersetzung : erfolgt durch präprozessor vor dem compiler*/
						/* dh der compiler sieht wiederum die gleitpunktkonstante 3.141*/

int main(){


	/* Speicher für : Radius, Oberfläche und Volumen*/
	float radius, volumen, flaeche;

	/* Radius einlesen*/
	printf("bitte Radius eingeben : ");
	scanf("%f", &radius);

	/*Berechnung durchführen*/
	flaeche = 4 * PI * radius * radius;
	volumen = 4.0/3.0 * PI * radius * radius * radius;

	/*Ausgabe*/
	printf("Fläche : %f\nVolumen : %f", flaeche, volumen);




}
