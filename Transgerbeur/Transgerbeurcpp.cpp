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
enum Eetat { vide, palette, rouleau };

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
}