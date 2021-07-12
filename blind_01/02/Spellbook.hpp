#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"

class Spellbook
{
	public:
	Spellbook();
	virtual ~Spellbook();

	void learnSpell(ASpell *spell);
	void forgetSpell(const std::string& spellName);
	ASpell *generateSpell(const std::string& spellName);

	private:
	// this in private ?? not to be inmplemented?
	Spellbook& operator = (const Spellbook& spellbook);
	Spellbook(const Spellbook& spellbook);

	std::vector<ASpell*> _spells;
};


#endif
