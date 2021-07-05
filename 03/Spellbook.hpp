#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>

#include <vector>

#include "ASpell.hpp"

class Spellbook
{
	public:
	Spellbook();
	virtual ~Spellbook();

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spellName);
	ASpell *generateSpell(std::string spellName);
	
	private:
	std::vector<ASpell*> _spells;
	Spellbook(const Spellbook& spellbook);
	Spellbook &operator = (const Spellbook& spellbook);
};

#endif
