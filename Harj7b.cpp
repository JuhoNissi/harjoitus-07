/******************************
*Teht�v�:Harjoitus 7b (palautus vko 40)
*Tekij�: Juho Nissi
*LYHYT KUVAUS:
*Tee ohjelma, joka kysyy k�ytt�j�lt� nimen, pituuden senttein� ja painon kiloina.
*Ohjelma laskee ja tulostaa k�ytt�j�n ihannepainon (pituus-100). Lis�ksi
*ohjelma kertoo k�ytt�j�n nykyisen painon eron kiloina verrattuna ihanne-
*painoon. Ohjelman k�ytt�liittym� toimii seuraavasti:
*Ihannepaino
*
*Ohjelma laskee ihannepainosi
*pituutesi perusteella.
*
*Anna nimesi > Mooses
*Anna pituutesi senttein� > 175
*Anna osoitteesi > Peikkovuori 5 as 4
*Anna painosi kiloina > 89
*
*Arvoisa Mooses
*Osoitteesi on Peikkovuori 5 as 4
*Nykyinen painosi 89.0 kg
*Ihannepainosi 75.0 kg
*Erotus 14.0 kg
*
*...
*a) k�yt� syotto/tulostus toimintoihin funktioita
*printf/scanf/gets/...(perus C:n funtiot, kirja sivu 86 - 91)  TEHD��N MY�HEMMIN
*b) k�yt� cin/cout/cin.get... olioita ohjelman
*toteuttamiseen (c++ metodit, kirja sivu 92 - 99)
*
*Versio: 1.0
*P�iv�ys: 20.9.2014
*/
#include <iostream>
using namespace std;
void main()
{
	char nimi[30];
	int pituus;
	char osoite[30];
	int paino;
	cout << "Ihannepaino" << endl
		<< "Ohjelma laskee ihannepainosi" << endl
		<< "pituutesi perusteella" << endl << endl;
	cout << "Anna nimesi >";
	cin.get(nimi, 30);
	cout << "Anna pituutesi sentteina >";
	cin >> pituus;
	cout << "Anna osoitteesi >";
	cin.get();
	cin.get(osoite, 30);
	cout << "Anna painosi kiloina >";
	cin >> paino;
	cout << endl << endl << endl;
	cout << "Arvoisa " << nimi << endl
		<< "Osoitteesi on " << osoite << endl
		<< "Nykyinen painosi on " << paino << endl
		<< "Ihannepainosi olisi " << pituus - 100 << "kg" << endl
		<< "Erotus " << paino - (pituus - 100) << "kg" << endl;
	return;
}