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
	ASpell(std::string name, std::string effect);
	ASpell(const ASpell& spell);
	virtual ~ASpell();
	ASpell &operator = (const ASpell& spell);

	std::string const &getName() const;
	std::string const &getEffect() const;

	void launch(ATarget const &target) const;
	virtual ASpell *clone() const = 0;
	
	private:
	std::string _name;
	std::string _effect;
};

#endif
