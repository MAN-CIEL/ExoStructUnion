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
	cout << "PROGRAMME TRANSGERBEUR" << endl;
	SCasier tabCasier[10];
	Srouleau ro1 = { 10.5,552 };
	Spalette pa1;
	pa1.poids = 101.2;
	strcpy_s(pa1.reference, "ref1");
	Eetat etatC1 = vide;
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

	cout << "Taille de chaque element cree precedemment : " << endl;
	cout << "Structure palette : " << sizeof(Spalette) << "octet(s)" << endl;
	cout << "Structure rouleau : " << sizeof(Srouleau) << "octet(s)" << endl;
	cout << "Enumeration etat : " << sizeof(Eetat) << "octet(s)" << endl;
	cout << "Union contenu : " << sizeof(Ucont) << "octet(s)" << endl;
	cout << "Structure casier : " << sizeof(SCasier) << "octet(s)" << endl;
	cout << "Membre poids Structure palette : " << sizeof(Spalette::poids) << "octet(s)" << endl;
	cout << "membre reference Structure palette : " << sizeof(Spalette::reference) << "octet(s)" << endl;
	cout << "membre longueur Structure rouleau : " << sizeof(Srouleau::longueur) << "octet(s)" << endl;
	cout << "membre numero Structure rouleau : " << sizeof(Srouleau::numero) << "octet(s)" << endl;
	cout << "membre palette enumeration etat : " << sizeof(Eetat::palette) << "octet(s)" << endl;
	cout << "membre rouleau enumeration etat : " << sizeof(Eetat::rouleau) << "octet(s)" << endl;
	cout << "membre vide enumeration etat : " << sizeof(Eetat::vide) << "octet(s)" << endl;
	cout << "membre paletteC union contenu : " << sizeof(Ucont::paletteC) << "octet(s)" << endl;
	cout << "membre rouleauC union contenu : " << sizeof(Ucont::rouleauC) << "octet(s)" << endl;
	cout << "membre etat structure casier : " << sizeof(SCasier::etat) << "octet(s)" << endl;
	cout << "membre contenu structure casier : " << sizeof(SCasier::contenu) << "octet(s)" << endl;
	cout << "membre px structure casier : " << sizeof(SCasier::px) << "octet(s)" << endl;
	cout << "membre py structure casier : " << sizeof(SCasier::py) << "octet(s)" << endl;
	cout << "tableau casier : " << sizeof(tabCasier) << "octet(s)" << endl;
	cout << "rouleau 1 : " << sizeof(ro1) << "octet(s)" << endl;
	cout << "palette 1 : " << sizeof(pa1) << "octet(s)" << endl;
	cout << "membre poids palette 1 : " << sizeof(pa1.poids) << "octet(s)" << endl;
	cout << "membre reference palette 1 : " << sizeof(pa1.reference) << "octet(s)" << endl;
	cout << "etat casier 1 : " << sizeof(etatC1) << "octet(s)" << endl;
	cout << "contenu : " << sizeof(cont) << "octet(s)" << endl;
	cout << "membre rouleauC contenu : " << sizeof(cont.rouleauC) << "octet(s)" << endl;
	cout << "casier 1 : " << sizeof(c1) << "octet(s)" << endl;
	cout << "membre contenu casier 1 : " << sizeof(c1.contenu) << "octet(s)" << endl;
	cout << "membre etat casier 1 : " << sizeof(c1.etat) << "octet(s)" << endl;
	cout << "membre px casier 1 : " << sizeof(c1.px) << "octet(s)" << endl;
	cout << "membre py casier 1 : " << sizeof(c1.py) << "octet(s)" << endl;
	cout << "casier 2 : " << sizeof(c2) << "octet(s)" << endl;
	cout << "nouveau tableau casier : " << sizeof(tabC) << "octet(s)" << endl;
	cout << "indice 0 nouveau tableau casier : " << sizeof(tabC[0]) << "octet(s)" << endl;
	cout << "indice 2 nouveau tableau casier : " << sizeof(tabC[2]) << "octet(s)" << endl;
}