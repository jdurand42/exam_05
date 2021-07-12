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
	ATarget(const std::string& type);
	ATarget(const ATarget& target);
	ATarget& operator = (const ATarget& target);
	virtual ~ATarget();

	const std::string& getType() const;

	void getHitBySpell(const ASpell& spell) const;
	
	virtual ATarget *clone() const = 0;
	
	private:
	std::string _type;
}; 

#endif
