#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Spellbook.hpp"

class Warlock
{
	public:
	Warlock(const std::string& name, const std::string& title);
	Warlock(const Warlock& warlock);
	Warlock& operator = (const Warlock& warlock);
	virtual ~Warlock();
	
	void setTitle(const std::string& title);
	void setName(const std::string& name);

	void introduce() const;
	
	const std::string& getName() const;
	const std::string& getTitle() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(const std::string& spellName);
	void launchSpell(const std::string& spellName, const ATarget& target); 
	
	private:
	Warlock();
	std::string _name;
	std::string _title;

	//std::vector<ASpell*> _spells;	
	Spellbook _spellbook;
};

#endif
