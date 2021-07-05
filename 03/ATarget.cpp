#include "ATarget.hpp"

ATarget::ATarget(): _type("")
{
}

ATarget::ATarget(const ATarget& target): _type(target.getType())
{
}

ATarget::ATarget(std::string type): _type(type)
{
}

ATarget& ATarget::operator = (const ATarget& target)
{
	_type = target.getType();
	return (*this);
}

ATarget::~ATarget()
{
}


std::string const &ATarget::getType() const
{	
	return (_type);
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << _type << " was " <<  spell.getEffect() << "!" << std::endl;
}

