#ifndef POLYMOPRH_HPP
#define POLYMOPRH_HPP

#include <iostream>
#include <string>

#include "ASpell.hpp"

class Polymorph: public ASpell
{
	public:
	Polymorph();
	virtual ~Polymorph();

	Polymorph *clone() const;

	private:
};

#endif
