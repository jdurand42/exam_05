#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include <string>

#include "ASpell.hpp"

class Fireball: public ASpell
{
	public:
	Fireball();
	virtual ~Fireball();
	
	Fireball *clone(void) const;
	private:
	
};

#endif
