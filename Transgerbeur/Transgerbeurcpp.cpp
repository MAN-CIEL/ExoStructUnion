#include <iostream>
using namespace std;

struct Spalette
{
	int poids;
	char reference[20];
};

struct Srouleau
{
	float longueur;
	int numero;
};

enum Eetat { vide = 0, palette = 1 , rouleau = 2 };

union Ucont
{
	Spalette paletteC;
	Srouleau rouleauC;
};

struct SCasier
{
	Eetat etat;
	int px, py;
	Ucont contenu;
}; 

void main()
{
	cout << "PROGRAMME TRANSGERBEUR";
	SCasier tabCasier[10];
	Srouleau ro1 = { 10.5,552 };
	Spalette pa1;
	pa1.poids = 101.2;
	strcpy_s(pa1.reference, "ref1");
	Eetat etatC1;
	etatC1 = vide;
	Ucont cont = { pa1 };
	cont.rouleauC = ro1;
	SCasier c1;
	c1.contenu = cont;
	c1.etat = rouleau;
	c1.px = 2;
	c1.py = 3;
	SCasier c2 = { palette };
	SCasier tabC[2];
	tabC[0] = c1;
	tabC[2] = c2;
}