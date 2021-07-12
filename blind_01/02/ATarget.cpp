#include "ATarget.hpp"

ATarget::ATarget(): _type("")
{
}


ATarget::ATarget(const std::string& type): _type(type)
{
}


ATarget::ATarget(const ATarget& target): _type(target.getType())
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

const std::string& ATarget::getType() const
{
	return (_type);
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << _type << " was " << spell.getEffect() << "!" << std::endl;
}
