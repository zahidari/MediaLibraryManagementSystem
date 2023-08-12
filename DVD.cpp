/*
 * DVD.cpp
 *
 *  Created on: 23 Haz 2023
 *      Author: zagu
 */

#include "DVD.h"

DVD::DVD(std::string initTitel, int initAltersfreigabe, std::string initGenre)
:Medium(initTitel)
,altersfreigabe(initAltersfreigabe)
,genre(initGenre)
{
	// TODO Auto-generated constructor stub

}

DVD::~DVD()
{
	// TODO Auto-generated destructor stub
}

void DVD::ausgabe() const{
	Medium::ausgabe();
	std::cout << "Altersfreigabe: "<< altersfreigabe << std::endl;
	std::cout << "Genre: "<< genre << std::endl;
}

bool DVD::asleihen(Person person, Datum ausleihdatum){
  
  // differenz der ausleidatum und geburtsdatum um
  // herauszufinden, ob die person alt genug ist.
  int wieVielAlt= ausleihdatum-person.getGeburtsdatum();
  
  int altersfreigabeInMonat= 12* altersfreigabe;
  
  
  //abfrage ob der alter klein ist, um abzulehnen
  if(wieVielAlt< altersfreigabeInMonat){
    std::cout << "Nicht alt genug, die Dvd konnte nicht ausgeliehen werden.\n";
    return false;
  }
    
    
  //Abfrage, wenn der Alter und der Altersfreigabe gleich sind, dann wird der Geburtstag verglichen. 
  if(altersfreigabeInMonat== wieVielAlt){
    // kontrolle des geburtstages und ausleihtages.
    // wenn der alter gegenüber freigabetag klein ist,
    // wird sie nicht ausgeliehen
    if(person.getGeburtsdatum.getTag() < ausleihdatum)
    {
        std::cout << "Nicht alt genug, die Dvd konnte nicht ausgeliehen werden.\n";

        return false;
    }
    
  }
  
  
  // wenn es größer ist,ohne kontrolle wird die Dvd automatisch ausgeliehen
  return Medium::ausleihen(person,ausleihdatum);
}