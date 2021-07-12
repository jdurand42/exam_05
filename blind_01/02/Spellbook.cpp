#include "Spellbook.hpp"

Spellbook::Spellbook()
{
}

Spellbook::~Spellbook()
{
	std::vector<ASpell*>::iterator it = _spells.begin();
	std::vector<ASpell*>::iterator end = _spells.end();

	for (; it != end; it++)
	{
		delete *it;
	}
	_spells.clear();
}

void Spellbook::learnSpell(ASpell* spell)
{
	if (!spell)
		return ;	
	std::vector<ASpell*>::iterator it = _spells.begin();
	std::vector<ASpell*>::iterator end = _spells.end();

	for (; it != end; it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	_spells.push_back(spell->clone()); // on lcone ici
}

void Spellbook::forgetSpell(const std::string& spellName)
{	
	std::vector<ASpell*>::iterator it = _spells.begin();
	std::vector<ASpell*>::iterator end = _spells.end();

	for (; it != end; it++)
	{
		if ((*it)->getName() == spellName)
		{
			delete (*it);
			it = _spells.erase(it);
			return ;
		}
	}
}

ASpell *Spellbook::generateSpell(const std::string& spellName)
{	
	std::vector<ASpell*>::iterator it = _spells.begin();
	std::vector<ASpell*>::iterator end = _spells.end();

	for (; it != end; it++)
	{
		if ((*it)->getName() == spellName)
			return (*it); // not clone() ??,
	}
	return (NULL);
}
