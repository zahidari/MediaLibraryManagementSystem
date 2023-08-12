/*
 * DVD.h
 *
 *  Created on: 23 Haz 2023
 *      Author: zagu
 */

#ifndef DVD_H_
#define DVD_H_
#include "Medium.h"

class DVD :public Medium
{
public:
	DVD(std::string initTitel, int initAltersfreigabe, std::string initGenre);
	virtual ~DVD();
	void ausgabe() const; //override
	bool ausleihen(Person person, Datum ausleihdatum);//override polymorphism
private:
	int altersfreigabe;
	std::string genre;
};

#endif /* DVD_H_ */
