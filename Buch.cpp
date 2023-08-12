/*
 * Buch.cpp
 *
 *  Created on: 22 Haz 2023
 *      Author: zagu
 */

#include "Buch.h"
#include <string>
#include <iostream>

Buch::Buch(std::string initTitel,std::string initAutor)
:Medium(initTitel)
,autor(initAutor)
{
	// TODO Auto-generated constructor stub

}

Buch::~Buch()
{
	// TODO Auto-generated destructor stub
}

void Buch::ausgabe ()const{
	Medium::ausgabe();
	std::cout << "Autor: "<< autor << std::endl;

}
