#include "ASpell.hpp"

ASpell::ASpell(): _name(""), _effect("")
{
}


ASpell::ASpell(const std::string& name, const std::string& effect): _name(name), _effect(effect)
{
}


ASpell::ASpell(const ASpell& spell): _name(spell.getName()), _effect(spell.getEffect())
{
}

ASpell& ASpell::operator = (const ASpell& spell)
{
	_name = spell.getName();
	_effect = spell.getEffect();
	return (*this);
}

ASpell::~ASpell()
{
}

const std::string& ASpell::getName() const
{
	return (_name);
}

const std::string& ASpell::getEffect() const
{
	return (_effect);
}

void ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}
