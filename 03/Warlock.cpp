#include "Warlock.hpp"

Warlock::Warlock()
{
}

Warlock::~Warlock()
{
}

Warlock::Warlock(const Warlock& warlock): _name(warlock.getName()), _title(warlock.getTitle())
{
	std::cout << "What a boring day\n";
}

Warlock::Warlock(const std::string& name, const std::string& title): _name(name), _title(title)
{
	std::cout << "What a boring day\n";
}

void Warlock::setTitle(const std::string& title)
{
	_title = title;
}

void Warlock::introduce() const
{
	std::cout << _name << " : my name is " << _name << ", " << _title << "!\n";
}

std::string const &Warlock::getName() const
{
	return (_name);
}

std::string const &Warlock::getTitle() const
{
	return (_title);
}

void Warlock::learnSpell(ASpell *spell)
{
	_spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName)
{
	_spellbook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget const &target)
{
	const ASpell *spell = _spellbook.generateSpell(spellName);
	const ATarget *targetP = &target;
	if (targetP && spell)
		spell->launch(target);
}	

