#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include <string>

#include "ASpell.hpp"

class Fwoosh: public ASpell
{
	public:
	Fwoosh();
	virtual ~Fwoosh();
	
	Fwoosh *clone(void) const;
	private:
	
};

#endif
