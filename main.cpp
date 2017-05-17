#include "Rectangle.h"
#include "Cercle.h"
#include "Carre.h"

//Manque le container et les commentaires

int main() {

	CRectangle rect1(5, 8, 3, 9);
	rect1.dessiner();
	rect1.aire();
	rect1.perimetre();
	cout << endl;

	CCercle cercle1(3, 1, 12);
	cercle1.dessiner();
	cercle1.aire();
	cercle1.perimetre();
	cout << endl;

	CCarre carre1(1, 1, 6);
	carre1.dessiner();
	carre1.aire();
	carre1.perimetre();
	cout << endl;

	CRectangle * rectbis = &rect1;
	CCarre *carrebis = &carre1;

	rectbis = (CRectangle*)carrebis;
	rectbis->dessiner();
	carrebis->dessiner();

	system("pause");

	return 0;
}