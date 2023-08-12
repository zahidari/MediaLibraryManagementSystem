/*
 * Magazin.cpp
 *
 *  Created on: 23 Haz 2023
 *      Author: zagu
 */

#include "Magazin.h"

Magazin::Magazin(std::string initTitel, Datum initDatumAusgabe, std::string initSparte)
: Medium(initTitel)
, datumAusgabe(initDatumAusgabe)
, sparte(initSparte)
{
	// TODO Auto-generated constructor stub

}

Magazin::~Magazin()
{
	// TODO Auto-generated destructor stub
}

void Magazin::ausgabe() const{
	Medium::ausgabe();
	std::cout << "Ausgabe: "<< datumAusgabe << std::endl;
	std::cout << "Sparte: "<< sparte << std::endl;
}

bool Magazin::asleihen(Person person, Datum ausleihdatum){
	
	// die vergangene Zeit zwischen Ausgabedatum und leihdatum in Monaten 
	int fark = ausleihdatum-datumAusgabe;
	
	//fark ist die zeit, die vergangen ist, die von 
	//Ausgabedatum bis zum ausleih Zeit vergangen ist.
	// wenn es weniger als 1 Monat ist, wird sie nicht ausleibar sein.
	if(fark < 1)
	{
	  std::cout<< "das Magazin ist neu und kann nicht ausgeliehen werden."<< std::endl;
	  return false;
	}
	 
	 // die kontrolle ob es ausgeliehen ist durch oberklasse 
	return Medium::ausleihen(person, ausleihdatum) ;
	 
	    
}
