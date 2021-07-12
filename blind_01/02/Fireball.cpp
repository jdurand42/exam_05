#include "Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "Fire ball de ses morts")
{
}

Fireball::~Fireball()
{
}

Fireball *Fireball::clone() const
{
	return (new Fireball(*this));
}
