#ifndef WARLOCK_HPP
#define WARLOCK_HPP 

#include <iostream>
#include <string>

#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Spellbook.hpp"

class Warlock {
	public:
		Warlock(const Warlock& warlock);
		Warlock& operator = (const Warlock& warlock);

		Warlock(const std::string &name, const std::string &title);
		virtual ~Warlock();
		
		void setTitle(const std::string& title);
		void introduce() const;	
	
		std::string const &getName() const;
		std::string const &getTitle() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, ATarget const &target);
		

	private:
		Warlock();
		std::string _name;
		std::string _title;

		//std::vector<ASpell*> _spells;
		Spellbook _spellbook;
		
};

#endif
