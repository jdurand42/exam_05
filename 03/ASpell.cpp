#include "ASpell.hpp"

ASpell::ASpell(): _name(""), _effect("")
{
}

ASpell::ASpell(const ASpell& spell): _name(spell.getName()), _effect(spell.getEffect())
{
}

ASpell::ASpell(std::string name, std::string effect): _name(name), _effect(effect)
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


std::string const &ASpell::getName() const
{	
	return (_name);
}

std::string const &ASpell::getEffect() const
{	
	return (_effect);
}

void ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}

