#ifndef ASPELL_HPP
#define ASPELL_HPP 

#include <iostream>
#include <string>

#include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
	ASpell();
	ASpell(const std::string& name, const std::string& effect);
	ASpell(const ASpell& spell);
	ASpell& operator = (const ASpell& spell);
	virtual ~ASpell();

	const std::string& getName() const;
	const std::string& getEffect() const;

	void launch(const ATarget& target) const;
	
	virtual ASpell *clone() const = 0;
	
	private:
	std::string _name;
	std::string _effect;
}; 

#endif
