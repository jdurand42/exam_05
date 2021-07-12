#include "Brickwall.hpp"

Brickwall::Brickwall(): ATarget("Brickwall Practice")
{
}

Brickwall::~Brickwall()
{
}

Brickwall *Brickwall::clone() const
{
	return (new Brickwall(*this));
}
