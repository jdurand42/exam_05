#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include <string>

#include "ATarget.hpp"

class Dummy: public ATarget
{
	public:
	Dummy();
	virtual ~Dummy();

	Dummy *clone() const;

	private:
};

#endif
