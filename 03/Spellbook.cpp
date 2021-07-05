#include "Spellbook.hpp"

Spellbook::Spellbook()
{
}

Spellbook::~Spellbook()
{
	std::vector<ASpell*>::iterator it = _spells.begin();
	std::vector<ASpell*>::iterator ite = _spells.end();
	
	for (; it != ite; it++)
	{
		delete *it;
	}
	_spells.clear();
}

void Spellbook::learnSpell(ASpell *spell)
{
	std::vector<ASpell*>::iterator it = _spells.begin();
	std::vector<ASpell*>::iterator ite = _spells.end();
	
	for (; it != ite; it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	_spells.push_back(spell->clone());
}

void Spellbook::forgetSpell(std::string spellName)
{
	std::vector<ASpell*>::iterator it = _spells.begin();
	std::vector<ASpell*>::iterator ite = _spells.end();
	
	for (; it != ite; it++)
	{
		if ((*it)->getName() == spellName)
		{
			delete *it;
			it = _spells.erase(it);
			return ;
		}
	}
}

ASpell *Spellbook::generateSpell(std::string spellName)
{
	std::vector<ASpell*>::iterator it = _spells.begin();
	std::vector<ASpell*>::iterator ite = _spells.end();
	
	for (; it != ite; it++)
	{
		if ((*it)->getName() == spellName)
		{
			return (*it) ;
		}
	}
	return (NULL);
}
