/*
 * Magazin.h
 *
 *  Created on: 23 Haz 2023
 *      Author: zagu
 */

#ifndef MAGAZIN_H_
#define MAGAZIN_H_

#include "Medium.h"

class Magazin :public Medium
{
public:
	Magazin(std::string initTitel, Datum initDatumAusgabe, std::string initSparte);
	virtual ~Magazin();
	void ausgabe() const;//override polymorphism
	bool asleihen(Person person, Datum ausleihdatum);//override polymorphism
private:
	Datum datumAusgabe;
	std::string sparte;
};

#endif /* MAGAZIN_H_ */
