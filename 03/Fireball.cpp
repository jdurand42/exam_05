#include "Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "Big fireball yeah")
{
}

Fireball::~Fireball()
{
}

Fireball *Fireball::clone(void) const
{
	return (new Fireball(*this));
}
