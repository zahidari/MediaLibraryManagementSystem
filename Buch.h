/*
 * Buch.h
 *
 *  Created on: 22 Haz 2023
 *      Author: zagu
 */

#ifndef BUCH_H_
#define BUCH_H_

#include <string>
#include "Medium.h"


class Buch : public Medium
{
public:
	Buch(std::string initTitel,std::string initAutor);
	virtual ~Buch();

	/*!
	 * @brief Ausgabefunktion polimorphism
	 *
	 * Funktion gibt alle Informationen eines Buchs auf der Konsole aus
     * inherit auch Medium ausgabe, daher wird es überladen.
     */
	void ausgabe() const;
private:
	std::string autor;
};

#endif /* BUCH_H_ */
