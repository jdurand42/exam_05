#include "Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a ship de ses morts")
{
}

Polymorph::~Polymorph()
{
}

Polymorph *Polymorph::clone() const
{
	return (new Polymorph(*this));
}
