#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <iostream>
#include <string>

#include "ATarget.hpp"

class Brickwall: public ATarget
{
	public:
	Brickwall();
	virtual ~Brickwall();
	
	Brickwall *clone(void) const;
	private:
	
};

#endif
