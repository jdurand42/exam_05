#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>

#include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
	ATarget();
	ATarget(std::string type);
	ATarget(const ATarget& target);
	virtual ~ATarget();
	ATarget &operator = (const ATarget& target);

	std::string const &getType() const;

	void getHitBySpell(ASpell const &spell) const;
	virtual ATarget *clone() const = 0;
	
	private:
	std::string _type;
};

#endif
